#include "main.h"

/**
 * _abs - computed absolute value of a integer
 * @i: holds place forinteger value
 * Return:0 always
*/

int _abs(int i)
{
	if (i > 0)
	{
		i = 0 + i;
	return (i);
	}
	else if (i < 0)
	{
		i = 0 - i;
	return (i);
	}
	else
	{
		return (0);
	}
}
