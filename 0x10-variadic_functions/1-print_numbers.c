#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed as arguments
 * @seperator: string printed between each number
 * @n: number of arguments
 * @...: variables to be printed
*/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
