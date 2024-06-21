> [!NOTE]
>
> Before anything, let me address the obvious, before you have a chance to check
> the layouts themselves:
>
> _I use QWERTY layout keys on my keyboards._
>
> I know QWERTY is not the most optimal layout out there, and I know I could
> improve my typing speed tremendously if I adopted something better like
> COLEMAK but the reality is that I want to use my custom layouts with the
> standard layout so others can adopt them easily.
>
> That being said, I still designed these layouts from a perspective that I
> might want to change the default layout without much of an effort, so I made
> sure that my main layer contains almost the entire QWERTY layout. This way,
> you can just change that layer to whatever you want, and still get everything
> else that I put together here.

# ZMK Custom Layouts

[![zmk version](https://img.shields.io/badge/ZMK-3.5-blue)](https://zmk.dev/)
[![firmware build](https://img.shields.io/github/actions/workflow/status/Townk/zmk-config/build.yml?label=firmware%20build)](https://github.com/Townk/zmk-config/actions/workflows/build.yml)

This repository contains the ZMK user configuration for all my keyboards that
use the [ZMK](https://zmk.dev/) firmware.

The way I organize the keyboards' layouts is to have a single _master layout_,
with more keys defined then any keyboard I have, and each individual Keyboard
map would define a _"layer adapter"_ mapping the keys in the layout that it uses
to its physical position.

Every keyboard layout has its own layout documentation (located under the `docs`
directory), but since they all share the majority of my layout, you should
expect lots of repeating texts between them.

My suggestion is to read the layout documentation for the keyboard you're
looking for, then, when you understand it, go check out the other docs. This
way, you won't have to read explanations for things you don't care in the first
place, and then you can just look the layout images and read anything that is
different.

Currently, in this repository, I have layout for:

- [Corne (6 columns)](docs/corne.md)
- [Lily58](docs/lily58.md)

If you did not click on any of the layout links yet, there are some general
information I would like you to have to help you understand them better.

## Symbols Glossary

Inside the keymap files and on the layout map images, you'll see a series of
symbols that are not well-used in ZMK configurations out there, so to understand
the layout easily, here is a table with all symbols I use:

 Symbols                                               | Description
:-----------------------------------------------------:| ---------------------------
![](./docs/symbols/apple-keyboard-command.svg)         | Command (Super)
![](./docs/symbols/apple-keyboard-control.svg)         | Control (Ctrl)
![](./docs/symbols/apple-keyboard-option.svg)          | Option (Alt / Meta)
⇪                                                      | Caps Word
![](./docs/symbols/apple-keyboard-shift.svg)           | Shift
![](./docs/symbols/web.svg)                            | Globe
![](./docs/symbols/keyboard-space.svg)                 | Space
![](./docs/symbols/keyboard-return.svg)                | Enter (Return / Ret)
![](./docs/symbols/backspace.svg)                      | Delete backwards (Backspace / Bksp)
![](./docs/symbols/backspace-reverse.svg)              | Delete forward (Del)
↖                                                      | Home
⇞                                                      | Page Up
⇟                                                      | Page Down
↘                                                      | End
![](./docs/symbols/keyboard-tab-reverse.svg)           | Backtab
![](./docs/symbols/keyboard-tab.svg)                   | Tab
![](./docs/symbols/volume-high.svg)                    | Volume up
![](./docs/symbols/volume-medium.svg)                  | Volume down
![](./docs/symbols/volume-off.svg)                     | Mute
![](./docs/symbols/brightness-7.svg)                   | Screen brightness up
![](./docs/symbols/brightness-5.svg)                   | Screen brightness down
![](./docs/symbols/lightbulb-off-outline.svg)          | Keyboard backlight off
![](./docs/symbols/lightbulb-on-20.svg)                | Keyboard backlight decrease
![](./docs/symbols/lightbulb-on-90.svg)                | Keyboard backlight increase
![](./docs/symbols/skip-backward.svg)                  | Previous song
![](./docs/symbols/play-pause.svg)                     | Play / pause
![](./docs/symbols/skip-forward.svg)                   | Next song
![](./docs/symbols/stop.svg)                           | Stop media
![](./docs/symbols/apps.svg)                           | Launchpad
![](./docs/symbols/view-dashboard-outline.svg)         | Mission Control (`⌘ ⌃ ↑`)
![](./docs/symbols/dock-window.svg)                    | Show application windows (`⌘ ⌃ ↓`)
![](./docs/symbols/folder-search-outline.svg)          | Spotlight
![](./docs/symbols/content-cut.svg)                    | Cut ( `⌘ X` )
![](./docs/symbols/content-copy.svg)                   | Copy ( `⌘ C` )
![](./docs/symbols/content-paste.svg)                  | Paste ( `⌘ V` )
![](./docs/symbols/undo.svg)                           | Undo ( `⌘ Z` )
![](./docs/symbols/redo.svg)                           | Redo ( `⇧ ⌘ Z` )
![](./docs/symbols/magnify.svg) →                      | Find Next ( `⌘ G` )
← ![](./docs/symbols/magnify.svg)                      | Find Previous ( `⇧ ⌘ G` )
![](./docs/symbols/window-maximize.svg) →              | Go to Virtual Desktop on the Right ( `⌘ ⌃ →` )
← ![](./docs/symbols/window-maximize.svg)              | Go to Virtual Desktop on the Left ( `⌘ ⌃ ←` )
![](./docs/symbols/window-restore.svg) →               | Next window ( `` ⌘ ` `` )
← ![](./docs/symbols/window-restore.svg)               | Previous window ( `⌘ ~` )
![](./docs/symbols/keyboard-variant.svg)               | Alternate layout (COLEMAK)
![](./docs/symbols/bluetooth-connect.svg)              | Bluetooth profile
![](./docs/symbols/bluetooth-off.svg)                  | Bluetooth profile clear
![](./docs/symbols/power-plug-outline.svg)             | Toggle OLED display
![](./docs/symbols/usb.svg)                            | Output mode (USB / BLE)
![](./docs/symbols/power.svg)                          | Turn off host computer
![](./docs/symbols/restart.svg)                        | Reset firmware
![](./docs/symbols/code-block-tags.svg)                | Bootload mode
![](./docs/symbols/numeric-1-box-multiple-outline.svg) | Numbers Layer
![](./docs/symbols/numeric-2-box-multiple-outline.svg) | Symbols Layer
![](./docs/symbols/numeric-3-box-multiple-outline.svg) | Navigation Layer
![](./docs/symbols/numeric-4-box-multiple-outline.svg) | Media Layer
![](./docs/symbols/numeric-5-box-multiple-outline.svg) | Buttons Layer
![](./docs/symbols/numeric-6-box-multiple-outline.svg) | System Layer
![](./docs/symbols/lock-outline.svg)                   | Lock layer in place

## Key Representation

When looking at the layout map images, you'll see that some keys have their
background highlighted with a different colors then the rest, and many keys have
more than one symbol as their labels.

To understand what all those symbols mean, lets first, look how a key that has
a single purpose is represented:

![](docs/images/simple-key.svg)

This key has nothing special about it. When I tap it, it will output `a`, and if
I hold it down, it will output `a` repeatedly, until I release it.

My layouts, like virtually every other keyboard layout in the world (including
the standard ones that most people use), have keys that are used exclusively to
alter what other keys output when held-down. When that happens, we say that the
key caused the keyboard to _"switch layers"_, for instance:

![](docs/images/shift-key.svg)

This is the _Shift_ key, which force other keys to output the uppercase version
of itself, or in certain cases, it can force the key to output a completely
different symbol then the normal one (e.g., the number keys in most standard
keyboards).

When a key outputs a different symbol than the uppercase version of the normal
output while holding down the _Shift_ key, it has the extra symbol drawn above
the normal one, for instance:

![](docs/images/number-2-key.svg)

When tapped while no other hey is held-down, it will output `2`, but if the
_Shift_ key is held-down while tapping it, it will output `@`.

Now, there is a special type of key that you don't find in standard keyboards
easily. Those keys output their normal value when tapped, and a different one
when held-down. These keys are called _"Hold-Tap"_ keys. Most custom layouts
use them, specially layouts for keyboards with less than 50 keys.

When those keys are shown in my layout maps, they have the _"hold-down"_ value
displayed bellow the normal symbol. For instance:

![](docs/images/f-shift-key.svg)

This key is a normal `F` key that output `f` when tapped, and `F` when tapped
while holding down the _"Shift"_ key. However, when I hold this key down, it
behaves like the _"Shift"_ key, meaning that if I hold it down, and then press
the key for number `2`, the keyboard will output an `@` character.

> [!NOTE]
>
> Unfortunately, Keymap Drawer does not support representations of
> [Mod-Morph](https://zmk.dev/docs/behaviors/mod-morph),
> [Tap-Dance](https://zmk.dev/docs/behaviors/tap-dance), nor Sticky
> [keys](https://zmk.dev/docs/behaviors/sticky-key) or
> [layers](https://zmk.dev/docs/behaviors/sticky-layer), so I had to come up
> with a syntax to represent some of them:
>
> ![](docs/images/labels-syntax.svg)
>
> When you see a symbol followed by `:`, followed by another symbol on either,
> the _shifted symbol_ or _held symbol_ positions, it is indicating a _morph_
> behavior, meaning: `<morph trigger>: <output symbol>`. On the example above,
> when the `A` key is tapped while holding down the _Command_ key, the result
> output will be the `` ` `` key.
>
> When you see a counter on the form of `<N>x`, followed by `:`, followed by a
> symbol on either the _held symbol_ or _shifted symbol_ positions, it indicates
> a _tap-dance_ behavior, meaning: `<tap count>x: <output symbol>`. On the
> example above, when the `A` key is tapped twice, it will output a `CAPS_LOCK`.

When we put all this together, and we see the following key in a layout map:

![](docs/images/backspace-del-key.svg)

We know that this key is a normal _"Delete Backwards"_ when tapped by itself,
and a _"Forward Delete"_ when tapped while holding down _"Shift"_. But when I
hold it down, it will be like I'm holding down the _"Command"_ key on my macOS.

## Tap-Hold Behavior

Usually, a tap and hold key goes into the "hold" mode when the key is held-down,
which prevents the user from holding the key down and have its output repeated
until the key is released.

To solve this issue, I used a (relatively new) feature of ZMK called
[`quick-tap-ms`](https://zmk.dev/docs/behaviors/hold-tap#quick-tap-ms), which
always produce the "tap" behavior when the key is pressed twice in quick
succession. This allows me to have repeatable keys even when they're a
"tap-hold" type of keys.

For instance, lets assume the `F` tap-hold key shown on the previous section.
The sequence of taps and their output would be:

- `F` down, `F` up :: it will output a single `f`;
- `F` down :: it will output a _"Shift"_ key;
- `F` down, `F` up, `F` down :: it outputs `ffffffffff`... until the key is
  released.

## Globe Key

Around 2021, Apple made the `(FN)/Globe` key a standard key on all its
keyboards, so as an Apple user, I wanted to have the same ability to access some
features using my keyboard as I can using a standard Apple keyboard.

ZMK has partial support for the _Globe_ key (check issue
[#937](https://github.com/zmkfirmware/zmk/issues/947) for details on the mater),
so I decided to add to my layouts as a _"hold"_ key, but is important to notice
that its behavior is not the same as the _"Globe"_ from an official Apple
product.

## Caps Lock

I think `CAPS_LOCK` is evil. No keyboard should ever have that key available.
That being said, I admit that sometime is very convenient to type a fully
capitalized word without having to hold down the _Shift_ key.

Fortunately, ZMK solved this by allowing us to use the
[CAPS_WORD](https://zmk.dev/docs/behaviors/caps-word) behavior, where, when
tapped, it will turn on the `CAPS_LOCK` just to the next word. After that, the
keyboard will put you on a normal typing mode again.

## Disclaimers

Layout map images are all generated with
[Keymap-Drawer](https://keymap-drawer.streamlit.app/) from Cem Aksoylar. If you
have your own custom ZMK or QMK config, I highly recommend you to check it out.

<!-- Although I don't use a visual layout editor, I checked that my layouts work -->
<!-- with [Keymap Editor](https://nickcoutsos.github.io/keymap-editor/) from Nick -->
<!-- Coutsos, so you can fork this repo and head to the editor's page to start making -->
<!-- this layout your own. -->

My homerow mod configuration is based on the fantastic _"timeless homerow mods"_
from [Robert U (urob)'s ZMK Configuration](https://github.com/urob/zmk-config).
You should absolutely check this configuration for examples.

The pattern I used to share my layout across multiple keyboards was a suggestion
from Rafael Romão ([rafaelromao](https://github.com/rafaelromao/keyboards)) and
Cem Aksoylar ([caksoylar](https://github.com/caksoylar)) on the [ZMK Discord
server](https://discord.com/channels/719497620560543766/813882537436905552/1253152742910984282),
so I spent some time digging through their ZMK configurations to learn, and copy
the pattern into my own layout.
