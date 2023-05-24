#include "main.h"

void print_numbers(int number) {
    int i = 0;
    i += _putchar('-');
    i += _putchar(number % 10 + '0');
    printf("i: %d\n", i); 
}
