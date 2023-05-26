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
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH '\0'
int dfree(void **ptr);

char *_strncpy(char *dest, const char *src, size_t n);
char *_strncat(char *dest, const char *src, size_t n);
char *_strchr(const char *s, int c);


char *_memset(char *s, char b, unsigned int n);
void ffree(char **pp);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

char *_strcpy(char *dest, const char *src);
char *_strdup(const char *str);
void _puts(const char *str);

int _strlen(const char *string);
int exist(char *pathname);
int _strcmp(char *str1, char *str2);
int _putchar(char c);
#endif /* MAIN_H */             
