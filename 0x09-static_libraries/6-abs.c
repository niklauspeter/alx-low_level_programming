#include <stdio.h>
#include "main.h"
/**
 * _abs - function computes the absolute value of a value
 * @c: value taken into consideration
 * description : computes absolute value
 *
 * Return: int value
 */
int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
