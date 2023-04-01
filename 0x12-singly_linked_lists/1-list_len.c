#include "lists.h"

/**
 * list_len - Get the number of elements in linked list
 * @h: pointer to the list_t list
 * Return: Number of elements
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
