#include "main.h"

/**
 * shell - Simple shell implementation
 */
void shell(void)
{
	char command[MAX_COMMAND_LENGTH];

	while (1)
	{
		_putchar('$');
		_putchar(' '); /* Display prompt */

		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			_putchar('\n'); /* Handle end of file (Ctrl+D) */
			break;
		}

		command[strcspn(command, "\n")] = '\0'; /* Remove trailing newline */

		if (strlen(command) == 0) /* If no command entered, display prompt again */
			continue;

		{
			pid_t pid = fork(); /* Fork a child process */

			if (pid < 0)
			{
				perror("Error forking process");
				exit(EXIT_FAILURE);
			}
			else if (pid == 0)
			{
				if (execlp(command, command, NULL) == -1) /* Execute the command */
				{
					perror("Error executing command");
					exit(EXIT_FAILURE);
				}
			}
			else
			{
				int status;


				waitpid(pid, &status, 0); /* Wait for the child process to complete */
			}
		}
	}
}

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	shell();
	return (0);
}
