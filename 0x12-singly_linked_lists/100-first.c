#include <stdio.h>

/**
 * main_constructor - function print message before the
 * main function runs
 * Return:nothing
*/
void __attribute__ ((constructor)) main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
