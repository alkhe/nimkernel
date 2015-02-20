import unsigned
type
    PVidMem* = ptr array[0..65_535, Entry]

    VGAColor* = enum
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

    Position* = tuple[x: int, y: int]

    Attribute* = distinct uint8
    Entry* = distinct uint16

const
    VRAMOffset* = 0xb8000
    VGAWidth* = 80
    VGAHeight* = 25

proc packColor*(bg: VGAColor, fg: VGAColor): Attribute =
    ## Combines a foreground and background color into a ``Attribute``.
    return ((ord(bg).uint8 shl 4) or ord(fg).uint8).Attribute

proc packEntry*(c: char, color: Attribute): Entry =
    ## Combines a char and a *Attribute* into a format which can be
    ## directly written to the Video memory.
    let c16 = ord(c).uint16
    let color16 = color.uint16
    return ((color16 shl 8) or c16).Entry

proc writeChar*(vram: PVidMem, entry: Entry, pos: Position) =
    ## Writes a character at the specified ``pos``.
    let index = (80 * pos.y) + pos.x
    vram[index] = entry

proc writeString*(vram: PVidMem, text: string, color: Attribute, pos: Position) =
    ## Writes a string at the specified ``pos`` with the specified ``color``.
    for i in 0 .. text.len-1:
        vram.writeChar(packEntry(text[i], color), (pos.x+i, pos.y))

proc screenClear*(video_mem: PVidMem, color: VGAColor) =
    ## Clears the screen with a specified ``color``.
    let attr = packColor(color, color)
    let space = packEntry(' ', attr)

    var i = 0
    while i <=% VGAWidth*VGAHeight:
        video_mem[i] = space
        inc(i)
