#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - functionconverts a binary number to an int
 * @b: string of binary numbers
 * Return: converted integer number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res <<= 1;
		if (*b & 1)
		{
			res += 1;
		}
		b++;
	}
	return (res);
}
