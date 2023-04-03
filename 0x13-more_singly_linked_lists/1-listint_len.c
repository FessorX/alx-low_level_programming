#include "lists.h"

/**
 * listint_len - Gets number of elements.
 * @h: Pointer to a list.
 * Return: Number of elements.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int count = 0;

	tmp = h;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
