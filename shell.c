#include "main.h"

int main(void)
{
    char *command;
    char buffer[BUFFER_SIZE];
    int status;

    while (1)
    {
        _putchar('$');
        _putchar(' ');

        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL)
        {
           	
            _putchar('\n');
            break;
        }

        
        buffer[strcspn(buffer, "\n")] = '\0';

        
        command = (char *)malloc(strlen(buffer) + 1);
        if (command == NULL)
        {
            fprintf(stderr, "Error: Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }

      
        strcpy(command, buffer);

       
        status = system(command);
        if (status == -1)
        {
            fprintf(stderr, "Error: Failed to execute the command\n");
        }

        
        free(command);
    }

    return (0);
}
