#include "main.h"
#include <stdio.h>

/**
 * main - program print number of arguments passed in'
 * @argc: number of arguments
 * @argv: value of string passe as argument
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
