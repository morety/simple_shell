#include "main.h"
/**
 * exec - Creates a new child,
 * executes a command and wait for the child process
 * to update the status
 * @arguments: Array of inputs by the user
 * Return: 0 if success
 */
int exec(char **arguments)
{
	pid_t pid;
	int stat, exe_stat;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		return -1;
	}
	else if (pid == 0)
	{
		exe_stat = execvp(arguments[0], arguments);
		if (exe_stat == -1)
		{
			perror("execvp");
			exit(1);
		}
		exit(0);
	}
	else
	{
		wait(&stat);
		return WEXITSTATUS(stat);
	}
}
