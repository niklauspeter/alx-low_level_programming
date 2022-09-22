#include "main.h"

/**
 * reverse_array - reveres content ofarray integers
 * @a: intger input intger value
 * @n: accepts integer value
 *
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}
