#include "main.h"

/**
 * *string_toupper - function changes lowe case to upper chase
 * @s: input for initial array
 * Return: pointer for converted string
*/

char *string_toupper(char *s)
{
	char *begin = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (begin);
}
