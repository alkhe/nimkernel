import memio
{.push stack_trace: off, profiler:off.}

proc rawoutput(s: string) =
    var vram = cast[PVIDMem](VRAMOffset)
    writeString(vram, "Error: ", packColor(White, Red), (0, 24))
    writeString(vram, s, packColor(White, Red), (7, 24))

proc panic(s: string) =
    rawoutput(s)

# Alternatively we also could implement these 2 here:
#
# template sysFatal(exceptn: typeDesc, message: string)
# template sysFatal(exceptn: typeDesc, message, arg: string)

{.pop.}
