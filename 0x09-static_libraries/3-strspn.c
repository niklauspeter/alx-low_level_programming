#include "main.h"
/**
*_strspn - function searches the number of bytes in the initial
* segment of s that consist only of bytes from accept
*@s:targeted segment 
*@accept:reference container
*
*Return:returns number of bytes in initial
* segment of s consting only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
