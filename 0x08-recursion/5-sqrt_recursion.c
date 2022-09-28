#include "main.h"
int _sqrt(int pre, int root);

/**
 * _sqrt_recursion - take in integer and finds square root
 * @n: integer input
 * Return: square root of int n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - finds square root
 * @pre: previous digit
 * @root: the squareroot of the number
 * Return: square root
*/

int _sqrt(int pre, int root)
{
	if (pre > root)
		return (-1);
	else if (pre * pre == root)
		return (pre);
	return (_sqrt(pre + 1, root));
}
