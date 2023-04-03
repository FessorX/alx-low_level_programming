#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of
 * a listint_t list.
 * @h: Pointer to a list.
 * Return: number of nodes.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int count = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
