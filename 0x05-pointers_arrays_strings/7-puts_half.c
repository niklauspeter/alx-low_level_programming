#include "main.h"

/**
 * puts_half - prints half of string followed by new line
 * @str: placeholder for string input
 * Return: nill
*/


void puts_half(char *str)
{
	int strlen = 0;
	int i;
	int j;

	while (str[strlen] != '\0')
		strlen++;
	if (strlen % 10 == 0)
		j = strlen / 2;
	else
		j = (strlen + 1) / 2;
	for (i = j; i < strlen; i++)
		_putchar(str[i]);
	_putchar('\n');
}
