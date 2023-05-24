#include "main.h"
/**
 * printEnvironment - Prints the environment variables
 * @envp: Array of environment variables
 */
void printEnvironment(char *envp[])
{
	char **env = envp;
	char *r;

	for (; *env; env++)
	{
		r = *env;

		while (*r)
		{
			_putchar(*r++);
		}
		_putchar('\n');
	}
}
