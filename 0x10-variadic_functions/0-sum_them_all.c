#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic function that returns the
 * sum of all its parameters
 * @n: constant number of arguments
 * Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return 0;
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
