#include "main.h"

/**
 * print_sign - accepts number and prints + if positive
 * prints minus if negative
 * @n: parameter accepts int value
 * Return:1 if positive 0 if zero and -1 if negative.
*/

int print_sign(int n)
{
int n;

if (n > 0)
{
_putchar(43 + 0);
return (1);
}
else if (n == 0)
{
_putchar(0 + 48);
return (0);
}
else
{
_putchar(45 + 0);
return (-1);
}
}

