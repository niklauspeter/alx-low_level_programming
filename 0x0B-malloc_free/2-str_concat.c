#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * puts them into newly allocated space in memory
 * @s1 : first string
 * @s2 : second string
 * Return: pointer to the concatenated string and 
 * null if emty string is passed
*/

char *str_concat(char *s1, char *s2)
{
	char *nw_string;
	int len1 = 0, i = 0, len2 = 0;
	char *start1, *start2;

	start1 = s1;
	if (s1 == NULL)
	{
		s1 = "";
	}

	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = start1;
	start2 = s2;
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;

	nw_string = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	start1 = nw_string;
	if (nw_string == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (len1 + len2); i++)
		{
			if (i < len1)
			{
				nw_string[i] = *s1;
				s1++;
			}
			else
			{
				nw_string[i] = *s2;
				s2++;
			}
		}
		nw_string[i] = '\0';
		return (start1);
	}
	return 0;
}
