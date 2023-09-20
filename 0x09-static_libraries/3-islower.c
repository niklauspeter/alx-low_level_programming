#include <stdio.h>
#include "main.h"
/**
 * _islower - the function name
 * @c : the varable in question
 * description : checks if c is in lower case
 *
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
