#include "main.h"

/**
 * _strdup - function returns pointer to new string
 * new string is duplicate of input string
 * @str: input string
 * Return: NULL if string is null and
 * returns pointer to duplicated string if successful
*/

char *_strdup(char *str)
{
	char *new_str;
	char *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (str != NULL)
	{
		for (i = 0; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		free(start);
		return (start);
	}
	else
		return (NULL);
}
