#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - selects a node in a linked list.
 * @head: Address of the first node in a list.
 * @index: nth node to find (starting from 0).
 * Return: Node address of nth(index) number.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

    i = 0;
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
