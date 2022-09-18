#include "main.h"
#include <stdio.h>

/**
 * _isupper - function cecks if argument is uppercase
 * Return:1 if uppercase and 0 if lower
 * @c: placeholderfor input character
*/

int _isupper(int c)
{
	char uppercase = 'A';

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			return (1);
		}
		else
			return (0);
	}
}
