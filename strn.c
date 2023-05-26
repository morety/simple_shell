#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @string: String to be sized
 *
 * Return: The length of the string
 */
int _strlen(const char *string)
{
	int length = 0;

	if (string == NULL)
		return (0);

	for (; string[length] != '\0'; length++);

	return (length);
}

