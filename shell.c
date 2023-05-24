#include "main.h"

/**
 * interactive - checks if shell is in interactive mode
 * @info: pointer to info_t struct
 *
 * Return: 1 if in interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimiter
 * @c: character to check
 * @delim: delimiter string
 *
 * Return: 1 if character is a delimiter, 0 otherwise
 */
int is_delim(char c, char *delim)
{
	while (*delim)
	{
		if (*delim++ == c)
			return (1);
	}
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: converted integer if successful, 0 if no numbers in string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int flag = 0;

	for (; *s != '\0' && flag != 2; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			result *= 10;
			result += (*s - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	return (sign == -1 ? -result : result);
}

