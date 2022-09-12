#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all alphabets but q and e
 * Return:0 if exits properly
*/

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
