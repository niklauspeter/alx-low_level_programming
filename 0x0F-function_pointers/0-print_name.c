#include "main.h"
#include <stdlib.h>

/**
 * print_name - function prnts name
 * @name: input of name to be printed
 * @f: inputs function to print name out
 * Return: returns name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
