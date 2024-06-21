#!/usr/bin/env sh

KD_DIR="$1"
SVG_DIR="$2"

for img in $(rg -o -N -I '"\$\$mdi:([^\$]*?)\$\$"' -r '$1' "${KD_DIR}"/*.yaml | sort | uniq); do
  curl -s "https://pictogrammers.com/library/mdi/icon/$img/" \
          | rg -o "download=\"${img}.svg\" href=\"data:image/svg\+xml;charset=utf-8,([^\"]*?)\"" -r '$1' \
          | python3 -c "import sys; from urllib.parse import unquote; print(unquote(sys.stdin.read()));" \
          | sed 's/viewBox="0 0 24 24"/viewBox="0 0 24 24" height="20px" width="20px" fill="#e8eaed"/' > "${SVG_DIR}/${img}.svg"
done

