#include <tamtypes.h>
#include <kernel.h>
#include <debug.h>

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    init_scr();
    scr_printf("NZP PS2 - bootstrap ELF\\n");
    scr_printf("PS2SDK toolchain build successful.\\n");
    scr_printf("Next milestone: inspect and adapt the NZP engine.\\n");
    scr_printf("\\nPress RESET on the console to exit.\\n");

    for (;;) {
        SleepThread();
    }

    return 0;
}
