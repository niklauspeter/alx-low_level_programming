#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: integer value
 * @index: index to look for starting from 0
 * Return: value of the bit or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
