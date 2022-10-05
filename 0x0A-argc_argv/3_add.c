#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function adds positive numbers
 * @argc: counts number of arguments
 * @argv: value of arguments passed
 * Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;
		int sum = 0;

		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum += atoi(argv[i]);
				printf("%d", sum);
				return (0);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}
