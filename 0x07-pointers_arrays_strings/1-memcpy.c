#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest : area to be copied into
 * @src : array to be copied from
 * @n: memory bytes to be copied
 * Return: returns pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}
