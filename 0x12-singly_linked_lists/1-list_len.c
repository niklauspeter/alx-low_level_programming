#include "lists.h"

/**
 * list_len - function coutns number of elements in list
 * @h: head of linked list
 * Return: number of items on list
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;


	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
