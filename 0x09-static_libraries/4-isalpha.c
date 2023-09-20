#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function checks whether alphabets C is 
 * a character
 * @c: value to be checked
 * description - return 1 if C is upper or lower
 * Return: 1 if  C is alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
