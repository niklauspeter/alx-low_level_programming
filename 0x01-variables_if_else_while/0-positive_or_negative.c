#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random number
 * assigns it to int n
 * determines if negative or positive
 * prints out verdict
 * Return:0 if properly exits
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

