#include "main.h"

/**
 * rev_string - reverse a string
 * @s: placeholder for string
 * Return: 0
*/

void rev_string(char *s)
{
	int strlen = 0;
	int i = 0;
	char rev;

	while (s[strlen] != '\0')
	{
		i++;
	}
	while (i < strlen--)
	{
		rev = s[i];
		s[i++] = s[strlen];
		s[strlen] = rev;
	}
}
