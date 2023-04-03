#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums all of the data (n) in a list.
 * @head: Address of the first node of the list.
 * Return: Sum of all data in a list.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
