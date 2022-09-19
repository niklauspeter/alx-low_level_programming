#include "main.h"

/**
 * _strlen - returns legthof string
 * @s: takes string as input
 * Return: value of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
