#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the destination string to be copied to
 * @src: the source string
 * @n: the maximum number of characters to be copied
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	char *s = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (s);
}

/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the maximum number of characters to be concatenated
 *
 * Return: the destination string
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *)s;
		s++;
	}

	return (NULL);
}

