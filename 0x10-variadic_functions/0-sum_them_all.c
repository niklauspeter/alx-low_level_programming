#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function that returns the
 * sum of all its parameters
 * @n: constant number of arguments
 * @...: other parameters
 * Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	if (n == 0)
		return (0);

	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
