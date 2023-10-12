#include "lists.h"

/**
 * free_dlistint- function that fress dlistint_t list
 * @head: pointer to a list
 * Return: 0 if successful
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		dlistint_t *next = temp->next;

		free(temp);
		temp = next;
	}
}
