#!/usr/bin/env bash

CONFIG_ROOT="$(git rev-parse --show-toplevel)"

export_layer() {
  local KEYMAP_NAME=$1
  local LAYER_NAME=$2
  local LAYOUR_FILE=$3

  echo "- Exporting layout map image for layer '$LAYER_NAME'"
  keymap -c "${CONFIG_ROOT}/support/keymap-config.yaml" draw \
    -s "$LAYER_NAME" \
    -o "${CONFIG_ROOT}/docs/images/$LAYOUR_FILE" \
    "$KEYMAP_NAME"
}

export_layout_map() {
  local SHIELD_NAME="$1"
  local KEYS_COUNT="$2"
  local EXPORT_BUTTONS="$3"
  local KEYMAP_NAME
  local KD_KEYMAP
  local KD_CONFIG_NO_SYMBOLS
  local KD_CONFIG_BACKGROUND
  local -a LAYOUT_LAYERS
  local -a LAYOUT_MAP_NAMES

  KEYMAP_NAME="$(echo "${SHIELD_NAME}" | tr "[:upper:]" "[:lower:]")"
  KD_KEYMAP="$(mktemp).yaml"

  echo "Generating layout map images for the ${SHIELD_NAME} keyboard..."
  echo "- Generating Keymap-Drawer YAML file"

  # The first part of the temp keymap contains the layout map with keys showing
  # their "Shift" symbol, and it include all base keymaps.
  keymap -c "${CONFIG_ROOT}/support/keymap-config.yaml" parse -z "${CONFIG_ROOT}/config/${KEYMAP_NAME}.keymap" \
    | sed -n '1,/Numbers:/p' \
    | sed -e '$ d' > "$KD_KEYMAP"

  # We need to create a special configuration for Keyboard Drawer that will be
  # the normal configuration, merged with the "no symbols" diff that we have on
  # the repository.
  KD_CONFIG_NO_SYMBOLS="$(mktemp).yaml"
  python "${CONFIG_ROOT}/support/merge_yaml.py" \
    "${CONFIG_ROOT}/support/keymap-config.yaml" \
    "${CONFIG_ROOT}/support/keymap-config-no-shift-symbols.yaml" > "$KD_CONFIG_NO_SYMBOLS"

  # The second part of the file contains the rest of the layout map with keys NOT
  # shoing their "Shift" symbol.
  keymap -c "$KD_CONFIG_NO_SYMBOLS" parse -z "${CONFIG_ROOT}/config/${KEYMAP_NAME}.keymap" \
    | sed -n '/Numbers:/,$ p' \
    | sed "s/RGB COLOR HSB(0 0 60)/{t: '\$\$mdi:palette-outline\$\$', h: reset}/" >> "$KD_KEYMAP"

  LAYOUT_LAYERS=(
    "QWERTY"
    "Numbers"
    "Symbols"
    "Navigation"
    "Media"
  )
  LAYOUT_MAP_NAMES=(
    "layer0-main"
    "layer1-numbers"
    "layer2-symbols"
    "layer3-navigation"
    "layer4-media"
  )

  if [[ -n "$EXPORT_BUTTONS" ]]; then
    LAYOUT_LAYERS+=("Buttons")
    LAYOUT_MAP_NAMES+=("layer5-buttons")
  fi
  LAYOUT_LAYERS+=("System" "COLEMAK")
  LAYOUT_MAP_NAMES+=("layer6-system" "layer7-colemak")

  for i in "${!LAYOUT_LAYERS[@]}"; do
    export_layer "$KD_KEYMAP" "${LAYOUT_LAYERS[$i]}" "${KEYMAP_NAME}${KEYS_COUNT}-${LAYOUT_MAP_NAMES[$i]}.svg"
  done

  KD_CONFIG_BACKGROUND="$(mktemp).yaml"
  python "${CONFIG_ROOT}/support/merge_yaml.py" \
    "${CONFIG_ROOT}/support/keymap-config.yaml" \
    "${CONFIG_ROOT}/support/keymap-config-background-color.yaml" > "$KD_CONFIG_BACKGROUND"

  echo "- Exporting full layout map image for packaging"
  mkdir -p "${CONFIG_ROOT}/build"
  keymap -c "${KD_CONFIG_BACKGROUND}" draw \
    -s "${LAYOUT_LAYERS[@]}" \
    -o "${CONFIG_ROOT}/build/${KEYMAP_NAME}${KEYS_COUNT}-layout-map.svg" \
    "$KD_KEYMAP"

  rm -rf "$KD_KEYMAP"
  rm -rf "$KD_CONFIG_NO_SYMBOLS"
  rm -rf "$KD_CONFIG_BACKGROUND"

  echo "Done!"
  echo ""
}

export_layout_map Corne 42
export_layout_map Lily58 "" 1

echo "Exporting layers Glyphs..."

# I need to copy the cached symbols from Keymap Drawer into my repository so
# the table of key symbols I have on the README file can render correctly.
for g in ~/Library/Caches/keymap-drawer/glyphs/*; do
  # I'm using `sed` to copy the file because I need to add `height`, `width`,
  # and `color` to the SVG, since GitHub does not allow me to have all the CSS
  # styles I want... I think :)
  sed 's/viewBox="0 0 24 24"/viewBox="0 0 24 24" height="20px" width="20px" fill="#e8eaed"/' "$g" > "${CONFIG_ROOT}/docs/glyphs/${g#*mdi:}"
done

echo "Done!"
