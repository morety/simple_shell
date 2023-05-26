#ifndef MAIN_H
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
int _strlen(const char *string);
int exist(char *pathname);
int _strcmp(char *str1, char *str2);
int _putchar(char c);
#endif /* MAIN_H */             
