#include "main.h"

/**
 * _puts_recursion- prints out characters in a string
 * @s:string input
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
