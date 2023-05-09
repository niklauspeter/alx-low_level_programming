#include "search_algos.h"
/**
 * linear_search - searches for a value in a sorted array of integers
 * takes in 3 parameters:
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 *
 * How it works
 *
 * Function takes in an array of integers, the size of the array,
 * and a value to search for as parameters.
 * Returns index of the first occurrence of the value in the array,
 * returns -1 if the value is not found or the array is NULL.
 *
 * On implementation, it uses a for loop to iterate over the array elements,
 * while comparing each element to the search value and then printing the
 * comparison for each iteration.
 * If match is found, function returns the current index.
 * If no match is found,
 * the function returns -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
