import memio, main
type
    TMultiboot_header = object
    PMultiboot_header = ptr TMultiboot_header

proc kmain(mb_header: PMultiboot_header, magic: int) {.exportc.} =
    if magic == 0x2BADB002:
        discard

    main()
