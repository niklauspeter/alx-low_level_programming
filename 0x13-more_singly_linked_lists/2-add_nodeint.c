#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function adds node at the beginning of a list
 * @head:pointer to head of list
 * @n: the vale to be added to nodei
 * Return: address tonew element, or NULL on failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
