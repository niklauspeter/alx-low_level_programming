#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function prnts name
 * @name: input of name to be printed
 * @f: inputs function to print name out
 * Return: NOTHING
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && *name != '\0' && f != NULL)
	f(name);
}
