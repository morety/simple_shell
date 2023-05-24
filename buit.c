#include "main.h"

void handle_exit(void)
{
    char message[] = "Exiting the shell...\n";
    int vp;
    for (vp = 0; message[vp] != '\0'; vp++)
    {
        _putchar(message[vp]);
    }
    exit(0);
}
