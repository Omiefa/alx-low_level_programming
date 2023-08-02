#include "lists.h"

/**
 * sum_listint-function that sum all the data of a listint_t list
 * @head: pointer to a list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
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
