#include "main.h"

/**
 * _strlen_recursion - calculates length of a string using recur
 * @s: takes string input
 * Return: nothing
*/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
