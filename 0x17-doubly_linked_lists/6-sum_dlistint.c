#include "lists.h"

/**
 *sum_dlistint-function that sum all the data of a dlistint_t list
 * @head: pointer to a list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	current = head;

	while (current != 0)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
