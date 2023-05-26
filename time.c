#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @str: the pointer to the memory area
 * @ch: the byte to fill *str with
 * @len: the amount of bytes to be filled
 * Return: a pointer to the memory area str
 */
char *_memset(char *str, char ch, unsigned int len)
{
	unsigned int i = 0;

	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (str);
}

/**
 * ffree - frees a string of strings
 * @str_arr: string of strings
 */
void ffree(char **str_arr)
{
	char **temp = str_arr;

	if (!str_arr)
		return;
	while (*str_arr)
	{
		free(*str_arr);
		str_arr++;
	}
	free(temp);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}

