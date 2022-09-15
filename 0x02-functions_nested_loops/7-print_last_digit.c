#include "main.h"

/**
 * print_last_digit- returns last digit of given umber
 * @i: holdsplac value for input integer
 * Return: always 0
*/

int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
		l *= -1;
	_putchar('0' + l);
	return (l);
}
