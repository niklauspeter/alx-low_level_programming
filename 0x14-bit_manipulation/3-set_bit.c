#include "main.h"

/**
 * set_bit - function sets value ofa bit to 1 at a given index
 * @n: pointer to int number
 * @index: index to replace starting from 0
 * Return: 1 if it works or -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
