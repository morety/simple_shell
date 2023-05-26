#include "main.h"

char *_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *_strdup(const char *str)
{
    size_t length;
    char *ret;

    if (str == NULL)
        return (NULL);

    length = strlen(str);
    ret = malloc(sizeof(char) * (length + 1));
    if (ret == NULL)
        return (NULL);

    return strcpy(ret, str);
}

void _puts(const char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}

int _putchar(char c)
{
    static int i;
    static char buf[WRITE_BUF_SIZE];

    if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
    {
        write(1, buf, i);
        i = 0;
    }
    if (c != BUF_FLUSH)
        buf[i++] = c;
    return (1);
}
