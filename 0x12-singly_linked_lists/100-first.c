#include <stdio.h>

/*using contructors to execute code before main 
 * funciton runs
*/
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - function print message before the
 * main function runs
 * Return:nothing
*/
void main_contructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
