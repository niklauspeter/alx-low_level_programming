#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return:0
*/

int main(void)
{
	unsigned int n;
	
	n = binary_to_uint("56");
	printf("%u\n",n);
	n = binary_to_uint("101");
	printf("%u\n",n);
	n = binary_to_uint("1001");
	printf("%u\n",n);
	n = binary_to_uint("1000110");
	printf("%u\n",n);
	
	return (0);
}
