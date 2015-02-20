import nake
import os

const arch = "i686-elf"

const
    CC = arch & "-gcc"
    AS = arch & "-as"

task "clean", "remove build files":
    removeFile("boot.o")
    removeFile("main.bin")
    removeDir("nimcache")

task "build", "build the operating system":
    echo "Compiling..."
    direShell "nim c -d:release --gcc.exe:$1 main.nim" % CC
    echo "Assembling..."
    direShell AS, "boot.s -o boot.o"
    echo "Linking..."
    direShell CC, "-T linker.ld -o main.bin -ffreestanding -O2 -nostdlib boot.o nimcache/main.o nimcache/system.o nimcache/unsigned.o nimcache/memio.o"

task "run", "run the operating system using QEMU":
    if not existsFile("main.bin"): runTask("build")
    direShell "qemu-system-i386 -kernel main.bin"
