#include "lists.h"

/**
 * pop_listint- function that deletes the head node of a listint_t linked list
 * and returns the head node's data(n)
 * @head: double pointer to a list
 * Return: the number of nodes printed
 */

int pop_listint(listint_t **head)
{

	int m;

	if (*head == NULL)
		return (0);

	else
	{
		listint_t *temp = *head;

		*head = (*head)->next;
		m = temp->n;
		free(temp);
	}
	return (m);

}
