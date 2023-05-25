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
int print_numbers(int n);
/* Function prototypes */
int _putchar(char c);
typedef struct {
    int readfd;
} info_t;

int interactive(info_t *info);
int is_delim(char c, char *delim);
int _isalpha(int c);
int _atoi(char *s);
int check_command(const char *command);
void handle_exit();
int exist(const char *pathname);
int add_numbers(int num1, int num2);
#endif /* MAIN_H */             
