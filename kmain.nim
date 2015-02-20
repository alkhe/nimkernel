import memio
type
    TMultiboot_header = object
    PMultiboot_header = ptr TMultiboot_header

proc kmain(mb_header: PMultiboot_header, magic: int) {.exportc.} =
    if magic != 0x2BADB002:
        discard # Something went wrong?

    var vram = cast[PVIDMem](VRAMOffset)
    screenClear(vram, DarkGray) # Make the screen yellow.

    # Demonstration of error handling.
    # var x = len(vram[])
    # var outOfBounds = vram[x]

    let attr = packColor(DarkGray, LightGreen)
    vram.writeString("Nim", attr, (25, 9))
    vram.writeString("Expressive. Efficient. Elegant.", attr, (25, 10))
    vram.writeString("It's pure pleasure.", attr, (5, 11))
