#include "main.h"

/**
 * print_line - prints one line on terminal
 *
 * @n:represents the numberof times the _ should be printed
 * Return: Always 0
*/

void print_line(int n)
{
int i = 0;
if (n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
}
else
{
_putchar('\n');
}
}
