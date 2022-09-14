#include <unistd.h>

/**
 * _putchar - writes paramenter c to stdout
 * @c: placeholder for the character to print
 * Return: 1 on success and -1 on error
*/

int _putchar(char c);
{
	return (write(1, &c, 1));

}

