#include "main.h"

/**
 * swap_int - function swaps value of two integers
 * @a: parameter holds value for first integer
 * @b: hold value for econd integer
 * Resturn:nothing
*/

void swap_int(int *a, int *b)
{
int c;
int d;
c = *a;
d = *b;
*b = c;
*a = d;
}
