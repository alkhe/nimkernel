# nimkernel

This is a small 32bit (i686) kernel written using the Nim programming language.

I have been wanting to do this for a while but it wasn't until people in the #nim IRC
channel inquired about Nim OS dev and the
[rustboot](https://github.com/charliesome/rustboot) kernel inspired me that I finally did it.

It doesn't do much, but it doesn't need to. Its purpose is to provide a starting
point for anyone wishing to write an OS in Nim.

It still manages to do a little more than fill a screen with a certain color.
Nimkernel implements:

* A ``writeString`` function which shows a string on screen in a specified
  position.
* A ``rainbow`` function which shows a string with a rainbow-like text
  foreground color differentiation in a specified position.
* Some simple error handling by implementing Nim system.nim's ``panic``
  function.
* Support for 16 colors with a brilliant type safe API!

![](http://picheta.me/private/images/nimkernel2.png)

**Note**: The error at the bottom is intentional, it is used to show that
the error handling works properly.

## Setup

You are required to have:

* QEMU
* a C and AS cross-compiler for i686
* Nim
* nimble

### Linux

I have performed this setup on a Arch Linux machine, but it should work on other distributions as well.

#### Building a cross compiler

A prewritten script with instructions for building a cross compiler can be found at [edge/cross](https://github.com/edge/cross).

For more information take a look at the [OSDev article](http://wiki.osdev.org/GCC_Cross-Compiler).

#### Nim setup

Follow the instructions in the [Nim repo](https://github.com/Araq/nim) to bootstrap Nim and put it in your PATH.

Do the same for [nimble](https://github.com/nim-lang/nimble) and install
``nake`` by executing ``nimble install nake`` or
alternatively just save [nake](https://github.com/fowlmouth/nake/raw/master/nake.nim)
into the root dir of this repo.

You can then compile the nakefile and therefore compile nimkernel:

```bash
$ nim c nakefile
$ ./nakefile run
```

This will automatically build and run the kernel using QEMU.

## License

Nimkernel is licensed under the MIT license.
