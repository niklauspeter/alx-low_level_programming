#include "main.h"

/**
 * _isdigit - checks if input is a single digit no
 * @c: placeholder for argument
 * Return: 1 if digit and 0 if not
*/

int _isdigit(int c)
{
	char i = '0';
	int digit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			digit = 1;
			break;
		}
	}
	return (digit);
}
