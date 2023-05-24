
#include "main.h"


/**
 * exist - Verify if a file exists
 * @pathname: Path to the file
 * Return: 1 if the file exists, 0 otherwise
 */
int exist(const char *pathname)
{
    if (access(pathname, F_OK) == 0)
        return 1;
    else
        return 0;
}
