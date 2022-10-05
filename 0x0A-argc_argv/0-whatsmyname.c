#include "main.h"
#include <stdio.h>

/**
 * main - program print name followed by newline
 * if you rename it stillprints new name without need for copilation
 * @argc:argument count
 * @argv: value of strings pased as arguments
 * Return: 0 if exectues correctly
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
