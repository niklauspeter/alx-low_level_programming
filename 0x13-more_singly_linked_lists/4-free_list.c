#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function frees a listint_t lit
 * @head: pointer to head of list
 * Returns: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
