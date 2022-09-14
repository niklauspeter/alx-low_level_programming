#include "main.h"

/**
 * _islower - function checks whether character is lowercase
 * @c:checks input
 * Return: returns 1 if lowercase and 0 if otherwise
*/

int _islower(int c)
{
	if ( c >= 97 && c <= 122)
		return (1);
	return (0);
}
