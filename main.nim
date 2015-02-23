import memio

proc main*() =
    var vram = cast[PVIDMem](VRAMOffset)
    screenClear(vram, DarkGray) # Make the screen yellow.

    let attr = packColor(DarkGray, LightGreen)
    vram.writeString("Nim", attr, (25, 9))
    vram.writeString("Expressive. Efficient. Elegant.", attr, (25, 10))
    vram.writeString("It's pure pleasure.", attr, (25, 11))
