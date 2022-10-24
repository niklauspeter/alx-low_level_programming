#include "lists.h"

/**
 * list_len - function coutns number of elements in list
 * @h: list whose funcitons are to be counted
 * Return: number of items on list
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;


	while (h)
	{
		if (h != NULL)
		{
			count++;
			h = h->next;
		}
		return (count);
	}
}
