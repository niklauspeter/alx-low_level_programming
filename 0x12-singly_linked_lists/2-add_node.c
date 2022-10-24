#include "lists.h"
#include <string.h>

/**
 * add_node - functin adds a node to the head of
 * a linked list
 * @head: poitner to alist_t pointer pointing to thehead struct
 * @str: pointer to string added to the node
 * Return: pointer to new head of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
