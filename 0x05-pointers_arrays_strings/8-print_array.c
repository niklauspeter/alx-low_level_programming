#include "main.h"

/**
 * print_array - prnts number elements of a array
 * @a: placeholder for array input
 * @n: lace holder for integer input
 * Return: null
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			print(", ");
	}
	_putchar('\n');
}
