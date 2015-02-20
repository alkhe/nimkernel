import unsigned
type
    PVIDMem* = ptr array[0..65_535, TEntry]

    TVGAColor* = enum
        Black = 0x0,
        Blue = 0x1,
        Green = 0x2,
        Cyan = 0x3,
        Red = 0x4,
        Magenta = 0x5,
        Brown = 0x6,
        LightGray = 0x7,
        DarkGray = 0x8,
        LightBlue = 0x9,
        LightGreen = 0xa,
        LightCyan = 0xb,
        LightRed = 0xc,
        LightMagenta = 0xd,
        Yellow = 0xe,
        White = 0xf

    TPos* = tuple[x: int, y: int]

    TAttribute* = distinct uint8
    TEntry* = distinct uint16

const
    VRAMOffset* = 0xb8000
    VGAWidth* = 80
    VGAHeight* = 25

proc makeColor*(bg: TVGAColor, fg: TVGAColor): TAttribute =
    ## Combines a foreground and background color into a ``TAttribute``.
    return (ord(fg).uint8 or (ord(bg).uint8 shl 4)).TAttribute

proc makeEntry*(c: char, color: TAttribute): TEntry =
    ## Combines a char and a *TAttribute* into a format which can be
    ## directly written to the Video memory.
    let c16 = ord(c).uint16
    let color16 = color.uint16
    return (c16 or (color16 shl 8)).TEntry

proc writeChar*(vram: PVidMem, entry: TEntry, pos: TPos) =
    ## Writes a character at the specified ``pos``.
    let index = (80 * pos.y) + pos.x
    vram[index] = entry

proc rainbow*(vram: PVidMem, text: string, pos: TPos) =
    ## Writes a string at the specified ``pos`` with varying colors which, despite
    ## the name of this function, do not resemble a rainbow.
    var colorBG = DarkGray
    var colorFG = Blue
    proc nextColor(color: TVGAColor, skip: set[TVGAColor]): TVGAColor =
        if color == White:
            result = Black
        else:
            result = (ord(color) + 1).TVGAColor
        if result in skip: result = nextColor(result, skip)

    for i in 0 .. text.len-1:
        colorFG = nextColor(colorFG, {Black, Cyan, DarkGray, Magenta, Red, Blue, LightBlue, LightMagenta})
        let attr = makeColor(colorBG, colorFG)

        vram.writeChar(makeEntry(text[i], attr), (pos.x+i, pos.y))

proc writeString*(vram: PVidMem, text: string, color: TAttribute, pos: TPos) =
    ## Writes a string at the specified ``pos`` with the specified ``color``.
    for i in 0 .. text.len-1:
        vram.writeChar(makeEntry(text[i], color), (pos.x+i, pos.y))

proc screenClear*(video_mem: PVidMem, color: TVGAColor) =
    ## Clears the screen with a specified ``color``.
    let attr = makeColor(color, color)
    let space = makeEntry(' ', attr)

    var i = 0
    while i <=% VGAWidth*VGAHeight:
        video_mem[i] = space
        inc(i)
