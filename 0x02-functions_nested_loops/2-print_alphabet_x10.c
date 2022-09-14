#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten time
*/

void print_alphabet_x10(void)
{
	int c;
	int line;

	for (line = 0; line <= 9; ++line)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}

