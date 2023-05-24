#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 */
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
