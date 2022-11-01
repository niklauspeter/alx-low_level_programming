#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary represetnation of a noi to stdout
 * @n: integer representation of number to be converted
 * Return: void
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
