#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#define MAX_COMMAND_LENGTH 100
#define MAX_ARGUMENTS 10
void shell(void);
 void _putchar(char c);
extern char **environ;
int check_command(const char *command);
void handle_exit();
int exist(const char *pathname);
int add_numbers(int num1, int num2);
#endif /* MAIN_H */             
