#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - functino checks if the number is prime
 * @n: input integer number
 * Return: 1 if n is prime while 0 if not
*/

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_divisible(n, div));
}

/**
 * is_divisble -checks if number is divisible
 * @num: int number to be checked
 * @div: the result after dividing
 * Return: 1 if the number is divisible an d0 if the number isn't
*/

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
