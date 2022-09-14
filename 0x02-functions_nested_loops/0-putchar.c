#include "main.h"
#include <string.h>

/**
 * main - prints _putchar using _printchar prototype
 * followed by new line
 * Return:0 if exits properly
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

