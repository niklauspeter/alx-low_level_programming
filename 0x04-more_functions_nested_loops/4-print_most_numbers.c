#include "main.h"

/**
 * print_most_numbers - prints all numbers from 0-9 but 2 and 4
 * Return:0 once it executes
*/

void print_most_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
