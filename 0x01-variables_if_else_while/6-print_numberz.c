#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints single digit numbers of base 10
 * Return:0 if properly exits
*/

int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
