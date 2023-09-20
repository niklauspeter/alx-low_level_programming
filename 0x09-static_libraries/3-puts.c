#include "main.h"
/**
 *_puts - prints a string
 *@str: string to print
 *
 *Description: prints a string
 *On Success: return the number of characters printed
 */

void _puts(char *str)
{
    int i = 0;

    while(*str)
    _putchar(*str++);

    _putchar('\n');
}