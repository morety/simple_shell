#include "main.h"
/**
 * _strcmp - Compares two strings
 * @str1: String to be compared
 * @str2: String to be compared
 *
 * Return: 0 if the strings are the same, > 0 if str1 is greater, < 0 if str2 is greater
 */
int _strcmp(char *str1, char *str2)
{
	int a = 0;

	while (str1[a] != '\0')
	{
		if (str1[a] != str2[a])
		{
			return (str1[a] - str2[a]);
		}
		a++;
	}

	while (str2[a] != '\0')
	{
		if (str1[a] != str2[a])
		{
			return (str1[a] - str2[a]);
		}
		a++;
	}

	return (0);
}
