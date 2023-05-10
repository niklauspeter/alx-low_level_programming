#include "search_algos.h"

/**
 * jump_search - function searches for value
 * in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: the value being searched for
 * Return: the first index where value is located
 *
* Your function must return the first index
* Where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL,
* your function must return -1
* You have to use the square root of the size of the array
* as the jump step.
* You can use the sqrt() function included in <math.h>
* (don’t forget to compile with -lm)
* Every time you compare a value in the array
* to the value you are searching for,
* you have to print this value (see example)
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
