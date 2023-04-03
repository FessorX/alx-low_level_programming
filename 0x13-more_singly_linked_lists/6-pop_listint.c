#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the head node of a list.
 * @head: Pointer to a list.
 * Return: data stored in the node.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int item;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	item = tmp->n;
	free(tmp);
	return (item);
}
