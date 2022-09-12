#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabets in lower then uppercase
 * Return: 0 if exits peroperly
*/

int main(void)
{
	char i_U;

	for (i_U = 'a'; i_U <= 'z'; i_U++)
	{
		putchar(i_U);
	}
	for (i_U = 'A'; i_U <= 'Z'; i_U++)
	{
		putchar(i_U);
	}
	putchar('\n');

	return (0);
}
