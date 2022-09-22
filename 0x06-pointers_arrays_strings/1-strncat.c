#include "main.h"

/**
 * _strncat - joints two strings using n bytes at most from src
 * @dest: first array input
 * @src: second array input
 * @n: input number
 * Return: final pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	/*char *ptr;*/

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
