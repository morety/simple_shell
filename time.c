
#include "main.h"
/**
 * exist - Verify if a file exists
 * @pathname: path to the file
 *
 * Return: 0 if the file exists, or -1 if not
 */
int exist(char *pathname)
{
	int fd = open(pathname, O_RDONLY);

	if (fd != -1)
	{
		close(fd);
		return (0);
	}
	else
	{
		return (-1);
	}
}
