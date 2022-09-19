#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: placeholder for input string
 * Return: 0
*/

void print_rev(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}
	while (strlen)
	{
		_putchar (s[--strlen]);
	}
	_putchar('\n');
}
