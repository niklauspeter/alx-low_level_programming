#include "main.h"

/**
 * _strspn - function gets length of prefix substring
 * @s: inputs initial string
 * @accept: second string whose values are to
 * Return: count of similar characters
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*accept)
	{
		while (*s)
		{
			if (*accept == *s && *s != ',')
				count++;
		}
		s++;
	}
	accept++;
	return (count);
}
