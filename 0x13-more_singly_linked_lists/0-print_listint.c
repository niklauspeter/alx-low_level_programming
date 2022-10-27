#include "lists.h"
#include <stdio.h>

/**
 * print_listint - fnction prints all elements in list
 * @h: list whose elements are to be printed
 * Return: nothing
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
