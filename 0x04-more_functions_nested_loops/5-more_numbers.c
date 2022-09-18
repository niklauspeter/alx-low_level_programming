#include "main.h"

/**
 * more_numbers - prints numebr 0-14 ten times
 * Return - 0 if executes
*/

void more_numbers(void)
{
	int l = 0, i;

	while (l < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		l++;
	}
}

