import nake
import os
import strutils

const arch = "i686-elf"

const
    CC = arch & "-gcc"
    AS = arch & "-as"

task "clean", "remove build files":
    var ignores = readFile(".gitignore")
    for filename in splitLines(ignores):
        if existsDir(filename):
            removeDir filename
        else:
            removeFile filename

task "build", "build the operating system":
    echo "Compiling..."
    direShell "nim c -d:release --gcc.exe:$1 kmain.nim" % CC
    echo "Assembling..."
    direShell AS, "boot.s -o boot.o"
    echo "Linking..."
    direShell CC, "-T linker.ld -o kernel.bin -ffreestanding -O2 -nostdlib boot.o nimcache/kmain.o nimcache/main.o nimcache/system.o nimcache/unsigned.o nimcache/memio.o"

task "run", "run the operating system using QEMU":
    if not existsFile("main.bin"): runTask("build")
    direShell "qemu-system-i386 -kernel kernel.bin"
