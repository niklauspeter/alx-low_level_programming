#include <stdio.h>

/**
*main - program prints the name of
*the file it was compiled from
*
*Return: returns 0 if successful
*/

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
