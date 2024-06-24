# Lily58 Coding Layout

<div align="center"><img src="images/corne-keyboard.webp"></div>

My small split keyboard layout is a mashup of several excellent layouts I found
online, with a heavy seasoning of my imagination. So yes, you probably already
saw some (if not most) of the things I put in this layout somewhere else.
Nevertheless, there are some modifications I made that are worth reading about.

The first recommendation I got, after jumping into the sub-50 keyboard world,
was to try the [Miryoku](https://github.com/manna-harbour/miryoku) layout. I
heard and read so much of this recommendation, that I started to think that this
should be the standard layout to use with a Corne.

The problem I have with things “ready to use”, is that everything about it, must
resonate with me if I want to use it.

Some things do… Most don't!

After deep diving into the [Miryoku](https://github.com/manna-harbour/miryoku)
layout concepts, I found myself more interested in the Layout UX Design than in
its implementation, so I decided to try to apply its concepts, to the ideas and
other layouts that I already created in the past.

The result of this, is what you're reading in this document!

Some notable features are:

- **Single-sided layers**: An extra layer should never have functional keys on
  both sides of the keyboard. If you bring a layer up using your left hand, all
  its functional keys should be located on the right side of the keyboard. This
  allows you to have accessible modifiers on the same hand that invoked the
  layer, making every layer key able to be combined with a modifier;
- **Separate layers for Symbols and Numbers**: I tried to put each one of these
  layers on different sides of the keyboard, to help my brain to identify what
  hand to use in which situation;
- **Dedicated layer of shortcuts**: The only layer that is mirrored on both
  sides of the keyboard;
- **Momentary layers**: All layers require you to keep a key pressed to use
  them, but you can lock them in place (this requires [PR
  #1984](https://github.com/zmkfirmware/zmk/pull/1984) to work, and it's not
  built with GitHub actions in this repository);
- **Dynamic keys**: Keys morph into other keys depending on the situation and
  requirement;
- **Timeless homerow mods**: Homerow mod configuration based on [Robert U
  (@urob)'s ZMK configuration](https://github.com/urob/zmk-config);

## Base Layer
