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
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}

