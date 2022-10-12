#include "main.h"
#include <stdio.h>

/**
 * create_array - creates array of chars
 * inititalizes it with a specific char
 * @size: inputs the size of the array
 * @c: char to initialize in function
 * Return: null if fails or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = (char *)malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
