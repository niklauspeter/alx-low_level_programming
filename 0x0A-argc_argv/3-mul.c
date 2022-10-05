#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints out the multiple of two numbers
 * @argc : numberof arguments
 * @argv : value of arguments in string
 * Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int sum;

		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
