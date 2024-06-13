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
use pure ZMK firmware.

Each keyboard in this configuration has its own documentation which you can find
under the `docs` directory, but for your convenience, you can use the following
links to access what you want:

- [Corne-42](docs/corne.md)
- [Lily58](docs/lily58.md)

If you did not click on the layout links yet, there are some general information
I would like you to have to help you understand my layouts better.

## Symbols Glossary

Inside the keymap files and on the layout map images, you'll see a series of
symbols that are not well-used in ZMK configurations out there, so to understand
the layout easily, here is a table with all symbols I use:

 Symbols                                   | Description
:-----------------------------------------:| ---------------------------
![](docs/symbols/keyboard_command_key.svg) | Command (Super)
![](docs/symbols/keyboard_control_key.svg) | Control (Ctrl)
![](docs/symbols/keyboard_option_key.svg)  | Option (Alt or Meta)
⇪                                          | Caps lock
![](docs/symbols/shift.svg)                | Shift
![](docs/symbols/language.svg)             | Globe
![](docs/symbols/space_bar.svg)            | Space
![](docs/symbols/keyboard_return.svg)      | Enter (Return)
![](docs/symbols/backspace.svg)            | Delete backwards (Backspace)
![](docs/symbols/north_west.svg)           | Home
⇞                                          | Page Up
⇟                                          | Page Down
![](docs/symbols/south_east.svg)           | End
![](docs/symbols/keyboard_tab_rtl.svg)     | Backtab
![](docs/symbols/keyboard_tab.svg)         | Tab
![](docs/symbols/volume_up.svg)            | Volume up
![](docs/symbols/volume_down.svg)          | Volume down
![](docs/symbols/volume_off.svg)           | Mute
![](docs/symbols/brightness_7.svg)         | Screen brightness up
![](docs/symbols/brightness_5.svg)         | Screen brightness down
![](docs/symbols/skip_previous.svg)        | Previous song
![](docs/symbols/play_pause.svg)           | Play / pause
![](docs/symbols/skip_next.svg)            | Next song
![](docs/symbols/bluetooth_connected.svg)  | Bluetooth profile
![](docs/symbols/bluetooth_disabled.svg)   | Bluetooth profile clear
![](docs/symbols/fit_screen.svg)           | Toggle OLED display
![](docs/symbols/restart_alt.svg)          | Reset firmware
![](docs/symbols/keyboard.svg)             | Bootload mode
![](docs/symbols/filter_1.svg)             | Numbers & Navigation Layer (L1)
![](docs/symbols/filter_2.svg)             | Symbols Layer (L2)
![](docs/symbols/filter_3.svg)             | Functions Layer (L3)

## Key Representation

When looking at the layout map images, you'll see that some keys have their
background highlighted with a different color then the rest, and many keys have
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
different symbol then the normal one (e.g. the number keys in most standard
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

This hey is a normal `F` key that output `f` when tapped, and `F` when tapped
while holding down the _"Shift"_ key. However, when I hold this key down, it
behaves like the _"Shift"_ key.

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
> When you see a symbold followed by `:`, followed by another symbol on the
> _shifted symbol_ position, this label is indicating a _morph_ behavior,
> meaning: `<morph trigger>: <output symbol>`. On the example above, when the
> `A` key is tapped while holding down the _Command_ key, the result outt will
> be the `` ` `` key.
>
> When you see a counter on the form of `<N>x`, followed by `:`, followed by a
> symbol on the _held symbol_ position, this label indicates a _tap-dance_
> behavior, meaning: `<tap count>x: <output symbol>`. On the example above, when
> the `A` key is tapped twice, it will output a `CAPS_LOCK`.

When we put all this together, and we see the following key on a layout map:

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
capitalized word without having to hold down the the _Shift_ key.

Fortunately, ZMK solved this by allowing us to use the
[CAPS_WORD](https://zmk.dev/docs/behaviors/caps-word) behavior, where you can
have the `CAPS_LOCK` turned on just to the next word. After that, the keyboard
will put you on a normal typing mode.

## Disclaimers

Layout map images are all generated with
[Keymap-Drawer](https://keymap-drawer.streamlit.app/) from Cem Aksoylar. If you
have your own custom ZMK or QMK config, I highly recommend you to check it out.

Although I don't use a visual layout editor, I checked that my layouts work
with [Keymap Editor](https://nickcoutsos.github.io/keymap-editor/) from Nick
Coutsos, so you can fork this repo and head to the editor's page to start making
this layout your own.
