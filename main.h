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

/* Custom types or structures */
typedef struct {
	int fd;
	/* Add any other members you need */
} info_t;

/* Function prototypes */
int _putchar(char c);
int is_shell_interactive(info_t *shell_info);
int is_character_delimiter(char c, char *delimiters);
int is_character_alphabetic(int c);
int convert_string_to_int(char *str);
int check_command(const char *command);
void handle_exit();
int exist(const char *pathname);
int add_numbers(int num1, int num2);
#endif /* MAIN_H */             
