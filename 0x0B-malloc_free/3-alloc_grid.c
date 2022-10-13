#include "main.h"

/**
 * alloc_grid - function returns pointer to
 * 2 dimentional array of integers
 * @width: input integer showing number of columns
 * @height: integer input showing no of rows
 * Return: pointer to 2DD array
*/

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (i = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
