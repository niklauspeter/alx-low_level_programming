#include "main.h"

/**
 * puts2 - prints every other character of a string followed by new line
 * @str: placeholder for string
 * Return: 0 if executes
*/

void puts2(char *str)
{
	int strlen = 0;
	int i = 0;

	while (str[strlen] != '\0')
		strlen++;
	strlen -= 1;

	for (i = 0; i <= strlen; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
