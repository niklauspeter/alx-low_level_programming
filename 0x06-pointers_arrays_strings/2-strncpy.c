#include "main.h"

/**
 * *_strncpy -function copies certain string value
 * @dest: takes rray as input
 * @src: takes in array as input
 * @n: input for integer value
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
