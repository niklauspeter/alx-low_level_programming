#include "main.h"

/**
 * _puts - prints string to stdout followed by new line
 * @str: place holder for str input
 * Return:0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
