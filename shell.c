#include "main.h"


/**
 * is_shell_interactive - Check if the shell is running in interactive mode
 * @shell_info: Pointer to the shell information structure
 * is_character_delimiter - Check if a character is a delimiter
 * @c: The character to be checked
 * @delimiters: String containing the delimiters
 * is_character_alphabetic - Check if a character is alphabetic
 * @c: The character to be checked
 * convert_string_to_int - Convert a string to an integer
 * @str: The string to be converted
 *
 * Return: 1 if the shell is interactive, 0 otherwise
 */
int is_shell_interactive(info_t *shell_info)
{
	return (isatty(STDIN_FILENO) && shell_info->fd <= 2);
}

int is_character_delimiter(char c, char *delimiters)
{
	while (*delimiters)
	{
		if (*delimiters++ == c)
			return (1);
	}
	return (0);
}

int is_character_alphabetic(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int convert_string_to_int(char *str)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; str[i] != '\0' && flag != 2; i++)
	{
		if (str[i] == '-')
			sign *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (str[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

int main(void)
{
	/* Example usage of the functions */
	info_t shell_info;
	int isShellInteractive;
	char delimiters[] = ",;:";
	char character;
	int isDelimiter;
	int character2;
	int isCharAlphabetic;
	char number[] = "12345";
	int convertedNumber;

	shell_info.fd = 0;

	isShellInteractive = is_shell_interactive(&shell_info);
	character = ';';
	isDelimiter = is_character_delimiter(character, delimiters);
	character2 = 'a';
	isCharAlphabetic = is_character_alphabetic(character2);
	convertedNumber = convert_string_to_int(number);

	_putchar('0' + isShellInteractive);
	_putchar('\n');
	_putchar('0' + isDelimiter);
	_putchar('\n');
	_putchar('0' + isCharAlphabetic);
	_putchar('\n');
	_putchar('0' + (convertedNumber == 0));
	_putchar('\n');

	return (0);
}
