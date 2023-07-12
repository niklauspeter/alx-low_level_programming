#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 *
 * HOW IT WORKS
 *.
 * The binary search function takes in three perimeters:
 * An array, it's size and A value to be searched for int he array
 * We start by checking if the array is NULL.
 * return -1 if it is.
 *
 * Then initialize three variables: left, right,
 * and mid(named i in this case), to implement the binary search algorithm.
 * left and right represent the leftmost and rightmost indices of the
 * subarray being searched, and mid to represent the middle index.
 *
 * We then enter a loop that runs until
 * left is greater than right.
 * We calculate the mid as the average of left and right plus the leftmost int.
 * We then print the subarray being searched using a for loop.
 *
 * We then check if the value at index mid is equal to value.
 * If it is, we return the mid.
 * If array[mid] is less than value,
 * it means the value falls on the right half of the initial array
 * Therefore we update leftmost elelment to mid + 1
 * (then proceed to find the mid of the new array).
 * Vice versa, if array[mid] is greater than value, we update right to mid - 1.
 *
 * If the loop is exited without finding value,
 * we print a message indicating so and return -1.
 *
 * Keep in mind, the function assumes that the array is sorted in
 * ascending order
 * and that value does not
 * appear more than once in the array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
