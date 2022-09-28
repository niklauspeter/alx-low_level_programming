#include "main.h"

/**
 * _strchr - locates character in string
 * Return: pointer to first occurrence of characterc
 * @s: string array
 * @c: character to be looked for
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
