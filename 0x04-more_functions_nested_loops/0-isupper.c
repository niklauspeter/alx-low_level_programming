#include "main.h"

/**
 * _isupper - function cecks if argument is uppercase
 * Return:1 if uppercase and 0 if lower
 * @c: placeholderfor input character
*/

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
