#include "main.h"
#include <stdio.h>

/**
 * main - program prints out all arguments
 * @argc: number of arguments
 * @argv: value of arguments in array
 * Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
