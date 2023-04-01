#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: data to be added.
 *
 * Return: Address of new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *temp, *temp2;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
