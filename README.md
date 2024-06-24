# ZMK Custom Layouts

[![ZMK version](https://img.shields.io/badge/ZMK-3.5-blue)](https://zmk.dev/)
[![Firmware build](https://img.shields.io/github/actions/workflow/status/Townk/zmk-config/build.yml?label=firmware%20build)](https://github.com/Townk/zmk-config/actions/workflows/build.yml)

This repository contains the ZMK user configuration for all my keyboards that
use the [ZMK](https://zmk.dev/) firmware.

The way I organize the keyboards' layouts is to have a single _master layout_,
with more keys defined than any keyboard I have. Then, each individual Keyboard
configuration would define a _“layer adapter”_ mapping the keys in the layout
that it uses to its physical position.

Every keyboard layout has its layout documentation (located under the `docs`
directory), but since they all share the majority of my layout, you should
expect plenty of repeating texts between them.

My suggestion is to read the layout documentation for the keyboard you're
looking for, then, when you understand it, go check out the other docs. This
way, you won't have to read explanations for things you aren't concerned with in
the first place, and then you can just look at the layout images and read
anything that is different.

Currently, in this repository, I have layout for:

- [Corne (6 columns)](docs/corne.md)
- [Lily58](docs/lily58.md)

If you did not click on any of the layout links yet, there is some general
information I would like you to have to help you understand them better.

## Symbols Glossary

Inside the keymap files and on the layout map images, you'll see a series of
symbols that are not well-used in ZMK configurations out there, so to understand
the layout easily, here is a table with all the symbols I use:

| Symbols                                                       | Description                                   |
|:-------------------------------------------------------------:| ----------------------------------------------|
| ![Command](./docs/glyphs/apple-keyboard-command.svg)         | Command (Super)                               |
| ![Control](./docs/glyphs/apple-keyboard-control.svg)         | Control (Ctrl)                                |
| ![Option](./docs/glyphs/apple-keyboard-option.svg)           | Option (Alt / Meta)                           |
| ⇪                                                             | Caps Word                                     |
| ![Shift](./docs/glyphs/apple-keyboard-shift.svg)             | Shift                                         |
| ![Globe](./docs/glyphs/web.svg)                              | Globe                                         |
| ![Space](./docs/glyphs/keyboard-space.svg)                   | Space                                         |
| ![Return](./docs/glyphs/keyboard-return.svg)                 | Enter (Return / Ret)                          |
| ![Backspace](./docs/glyphs/backspace.svg)                    | Delete backwards (Backspace / Bksp)           |
| ![Forward Delete](./docs/glyphs/backspace-reverse.svg)       | Delete forward (Del)                          |
| ↖                                                             | Home                                          |
| ⇞                                                             | Page Up                                       |
| ⇟                                                             | Page Down                                     |
| ↘                                                             | End                                           |
| ![Backtab](./docs/glyphs/keyboard-tab-reverse.svg)           | Backtab                                       |
| ![Tab](./docs/glyphs/keyboard-tab.svg)                       | Tab                                           |
| ![Volume up](./docs/glyphs/volume-plus.svg)                  | Volume up                                     |
| ![Volume down](./docs/glyphs/volume-minus.svg)               | Volume down                                   |
| ![Volume off](./docs/glyphs/volume-off.svg)                  | Mute                                          |
| ![Brightness up](./docs/glyphs/brightness-7.svg)             | Screen brightness up                          |
| ![Brightness down](./docs/glyphs/brightness-5.svg)           | Screen brightness down                        |
| ![Backlight off](./docs/glyphs/lightbulb-off-outline.svg)    | Keyboard backlight off                        |
| ![Backlight down](./docs/glyphs/lightbulb-on-20.svg)         | Keyboard backlight decrease                   |
| ![Backlight up](./docs/glyphs/lightbulb-on-90.svg)           | Keyboard backlight increase                   |
| ![Skip back](./docs/glyphs/skip-backward.svg)                | Previous song                                 |
| ![Play or pause](./docs/glyphs/play-pause.svg)               | Play / pause                                  |
| ![Skip forward](./docs/glyphs/skip-forward.svg)              | Next song                                     |
| ![Stop](./docs/glyphs/stop.svg)                              | Stop media                                    |
| ![Launchpad](./docs/glyphs/apps.svg)                         | Launchpad                                     |
| ![Mission Control](./docs/glyphs/view-dashboard-outline.svg) | Mission Control (`⌘ ⌃ ↑`)                     |
| ![Show all windows](./docs/glyphs/dock-window.svg)           | Show application windows (`⌘ ⌃ ↓`)            |
| ![Spotlight](./docs/glyphs/folder-search-outline.svg)        | Spotlight                                     |
| ![Cut](./docs/glyphs/content-cut.svg)                        | Cut (`⌘ X`)                                   |
| ![Copy](./docs/glyphs/content-copy.svg)                      | Copy (`⌘ C`)                                  |
| ![Paste](./docs/glyphs/content-paste.svg)                    | Paste (`⌘ V`)                                 |
| ![Undo](./docs/glyphs/undo.svg)                              | Undo (`⌘ Z`)                                  |
| ![Redo](./docs/glyphs/redo.svg)                              | Redo (`⇧ ⌘ Z`)                                |
| ![Search](./docs/glyphs/magnify.svg) →                       | Find Next (`⌘ G`)                             |
| ← ![Search](./docs/glyphs/magnify.svg)                       | Find Previous (`⇧ ⌘ G`)                       |
| ![Previous word](./docs/glyphs/format-letter-starts-with.svg)| Previous word (`⌥ ←`)                         |
| ![Next word](./docs/glyphs/format-letter-ends-with.svg)      | Next word (`⌥ →`)                             |
| ![Line start](./docs/glyphs/format-pilcrow-arrow-left.svg)   | Beginning of line (`⌘ ←`)                     |
| ![Line end](./docs/glyphs/format-pilcrow-arrow-right.svg)    | End of line (`⌘ →`)                           |
| ![Virtual desktop](./docs/glyphs/window-maximize.svg) →      | Go to Virtual Desktop on the Right (`⌘ ⌃ →`)  |
| ← ![Virtual desktop](./docs/glyphs/window-maximize.svg)      | Go to Virtual Desktop on the Left (`⌘ ⌃ ←`)   |
| ![Window](./docs/glyphs/window-restore.svg) →                | Next window (`` ⌘ ` ``)                       |
| ← ![Window](./docs/glyphs/window-restore.svg)                | Previous window (`⌘ ~`)                       |
| ![Keyboard](./docs/glyphs/keyboard-variant.svg)              | Alternate layout (COLEMAK)                    |
| ![Bluetooth profile](./docs/glyphs/bluetooth-connect.svg)    | Bluetooth profile                             |
| ![Bluetooth clear](./docs/glyphs/bluetooth-off.svg)          | Bluetooth profile clear                       |
| ![Keyboard power](./docs/glyphs/power-plug-outline.svg)      | Toggle OLED display                           |
| ![LED underglow actions](./docs/glyphs/palette-outline.svg)  | LED RGB underglow actions                     |
| ![USB](./docs/glyphs/usb.svg)                                | Output mode (USB / BLE)                       |
| ![Computer power](./docs/glyphs/power.svg)                   | Turn off host computer                        |
| ![Keyboard reset](./docs/glyphs/restart.svg)                 | Reset firmware                                |
| ![Bootload](./docs/glyphs/code-block-tags.svg)               | Bootload mode                                 |
| ![Layer 1](./docs/glyphs/numeric-1-box-multiple-outline.svg) | Numbers Layer                                 |
| ![Layer 2](./docs/glyphs/numeric-2-box-multiple-outline.svg) | Symbols Layer                                 |
| ![Layer 3](./docs/glyphs/numeric-3-box-multiple-outline.svg) | Navigation Layer                              |
| ![Layer 4](./docs/glyphs/numeric-4-box-multiple-outline.svg) | Media Layer                                   |
| ![Layer 5](./docs/glyphs/numeric-5-box-multiple-outline.svg) | Buttons Layer                                 |
| ![Layer 6](./docs/glyphs/numeric-6-box-multiple-outline.svg) | System Layer                                  |
| ![Layer lock](./docs/glyphs/lock-outline.svg)                | Lock layer in place                           |

## Key Representation

When looking at the layout map images, you'll see that some keys have their
background highlighted with different colors than the rest; many of them, also
have more than one symbol as their labels.

To understand what all those symbols mean, let's first, look at how a key that
has a single purpose is represented:

![Simple key representation](docs/images/simple-key.svg)

This key has nothing special about it. When I tap it, it will output `a`, and if
I hold it down, it will output `a` repeatedly, until I release it.

My layouts, like virtually every other keyboard layout in the world (including
the standard ones that most people use), have keys that are used exclusively to
alter what other keys output when held-down. When that happens, we say that the
key caused the keyboard to _“switch layers”_, for instance:

![Shift key representation](docs/images/shift-key.svg)

This is the _Shift_ key, which forces other keys to output the uppercase version
of itself, or in certain cases, it can force the key to output an entirely
different symbol than the normal one (e.g., the number keys in most standard
keyboards).

When a key outputs a different symbol than the uppercase version of the normal
output while holding down the _Shift_ key, it has the extra symbol drawn above
the normal one, for instance:

![Number 2 key representation](docs/images/number-2-key.svg)

When tapped while no other hey is held-down, it will output `2`, but if the
_Shift_ key is held-down while tapping it, it will output `@`.

Now, there is a special type of key that you don't find in standard keyboards
easily. Those keys output their normal value when tapped, and a different one
when held-down. These keys are called _“Hold-Tap”_ keys. Most custom layouts
use them, specially layouts for keyboards with less than 50 keys.

When those keys are shown in my layout maps, they have the _“hold-down”_ value
displayed below the normal symbol. For instance:

![Tap-hold key “F” and “Shift”](docs/images/f-shift-key.svg)

This key is a normal `F` key that output `f` when tapped, and `F` when tapped
while holding down the _“Shift”_ key. However, when I hold this key down, it
behaves like the _“Shift”_ key, meaning that if I hold it down, and then press
the key for number `2`, the keyboard will output a `@` character.

> [!NOTE]
> Unfortunately, Keymap Drawer does not support representations of
> [Mod-Morph](https://zmk.dev/docs/behaviors/mod-morph) or
> [Tap-Dance](https://zmk.dev/docs/behaviors/tap-dance), so I had to come up
> with a syntax to represent them:
>
> ![Special labels on key representation](docs/images/labels-syntax.svg)
>
> When you see a symbol followed by `:`, followed by another symbol on either,
> the _shifted symbol_ or _held symbol_ positions, it is indicating a _morph_
> behavior, meaning: `<morph trigger>: <output symbol>`. In the example above,
> when the `A` key is tapped while holding down the _Command_ key, the result
> output will be the `` ` `` key.
>
> When you see a counter in the form of `<N>x`, followed by `:`, followed by a
> symbol on either the _held symbol_ or _shifted symbol_ positions, it indicates
> a _tap-dance_ behavior, meaning: `<tap count>x: <output symbol>`. In the
> example above, when the `A` key is tapped twice, it will output a `CAPS_LOCK`.

When we put all this together, and we see the following key in a layout map:

![Tap-hold key “Backspace” and “Forward Delete”](docs/images/backspace-del-key.svg)

We know that this key is a normal _“Delete Backwards”_ when tapped by itself,
and a _“Forward Delete”_ when tapped while holding down _“Shift”_. But when I
hold it down, it will be like I'm holding down the _“Command”_ key on my macOS.

## Tap-Hold Behavior

Usually, a tap and hold key goes into the “hold” mode when the key is held-down,
which prevents the user from holding the key down and having its output repeated
until the key is released.

To solve this issue, I used a (relatively new) feature of ZMK called
[`quick-tap-ms`](https://zmk.dev/docs/behaviors/hold-tap#quick-tap-ms), which
always produces the “tap” behavior when the key is pressed twice in quick
succession. This allows me to have repeatable keys, even when they're a
“tap-hold” type of key.

For instance, let's assume the `F` tap-hold key shown in the previous section.
The sequence of taps and their output would be:

- `F` down, `F` up :: it will output a single `f`;
- `F` down :: it will output a _“Shift”_ key;
- `F` down, `F` up, `F` down :: it outputs `ffffffffff…` until the key is
  released.

## Globe Key

Around 2021, Apple made the `(FN)/Globe` key a standard key on all its
keyboards, so as an Apple user, I wanted to have the same ability to access some
features using my keyboard as I can using a standard Apple keyboard.

ZMK has partial support for the _Globe_ key (check issue
[#937](https://github.com/zmkfirmware/zmk/issues/947) for details on the mater),
so I decided to add to my layouts as a _“hold”_ key, but it is important to
notice that its behavior is not the same as the _“Globe”_ from an official Apple
product.

## Caps Lock

I think `CAPS_LOCK` is evil. No keyboard should ever have that key available.
That being said, I admit that sometime is very convenient to type a fully
capitalized word without having to hold down the _Shift_ key.

Fortunately, ZMK solved this by allowing us to use the
[`CAPS_WORD`](https://zmk.dev/docs/behaviors/caps-word) behavior, where, when
tapped, it will turn on the `CAPS_LOCK` just to the next word typed. Thereafter,
the keyboard will put you on a normal typing mode again.

## Disclaimers

Layout map images are all generated with
[Keymap-Drawer](https://keymap-drawer.streamlit.app/) from Cem Aksoylar. If you
have your custom ZMK or QMK configuration, I highly recommend you to check it
out.

My homerow mod configuration is based on the fantastic _“timeless homerow mods”_
from [Robert U (@urob)'s ZMK Configuration](https://github.com/urob/zmk-config).
You should absolutely check this configuration for examples.

The pattern I used to share my layout across multiple keyboards was a suggestion
from Rafael Romão ([@rafaelromao](https://github.com/rafaelromao/keyboards)) and
Cem Aksoylar ([@caksoylar](https://github.com/caksoylar)) on the [ZMK Discord
server](https://discord.com/channels/719497620560543766/813882537436905552/1253152742910984282),
so I spent some time digging through their ZMK configurations to learn, and copy
the pattern into my layout.

Unfortunately, due to the nature of my layout, you cannot use this configuration
with Nick Coutsos [Keymap-Editor](http://nickcoutsos.github.io/keymap-editor).
