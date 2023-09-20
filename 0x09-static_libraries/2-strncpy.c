#include "main.h"
/**
*  _strncpy - function  copies string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works like the standard library function `strncpy`.
*@dest: buffer that stores the string copy
*@src:the src string
*@n:maximum number of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
