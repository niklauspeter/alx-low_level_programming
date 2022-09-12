#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints out alphabets in reverse
 * Return:0 if exits properly
*/

int main(void)
{
char lower;
for (lower = 'z'; lower >= 'a'; lower--)
{
putchar(lower);
}
putchar('\n');
return (0);
}
