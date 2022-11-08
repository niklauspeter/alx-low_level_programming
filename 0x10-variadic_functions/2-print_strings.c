#include "variadic_functions.h"

/**
 * print_strings - function prints tring followed by new line
 * @seperator: string to be printed in between the strings
 * @n: number of strings passed as arguments
 * @...: string to be printed
*/

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (seperator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
