#include "lists.h"

/**
 * free_listint- function that fress listint_t list
 * @head: pointer to a list
 * Return: 0 if successful
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		listint_t *next = temp->next;

		free(temp);
		temp = next;
	}
}
