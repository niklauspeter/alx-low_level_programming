#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints outlower case leters
 * Return:0 if properly exits
*/

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	putchar(lower);
	}
	putchar('\n');
	return (0);
}

