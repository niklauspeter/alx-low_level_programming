#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * by jumping through a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: The value being search for in array
 * Return: First index where value is located
 *
 * HOW IT WORKS:
 *
 * The function takes in a sorted integer array, the size of the array,
 * and the value to search as input parameters.
 * It check if the array is NULL, and returns -1 if it is.
 * It then sets a jump step (array block) 
 * as the square root of the size of the array,
 * and initializes the left and right pointers.
 *
 * A while loop moves the right pointer forward in jumps
 * of size jump until it finds an element
 * that's greater than or equal to the value we are looking
 * for or until it reaches the end of the array.
 * Inside the loop, it also prints the indices of the array that are
 * being checked.
 *
 * Once the loop is complete, it checks if the right pointer has exceeded
 * the bounds of the array and adjusts it if necessary.
 * It then searches for the value in the left or right rang using a for loop,
 * and returns the index if it is found.
 * If value is not found, it prints returns -1 together with a message.
 *
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
