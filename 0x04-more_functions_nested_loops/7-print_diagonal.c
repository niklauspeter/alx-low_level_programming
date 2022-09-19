#include "main.h"

/**
 * print_diagonal - prints diagonal line on terminal using backslash
 * @n: the number oftimes the backslashshouldbe printed
 * Return:0 if executes successfuly
*/

void print_diagonal(int n)
{
	int d, i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (d = 0; d < i; d++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		  _putchar('\n');
	}
}
