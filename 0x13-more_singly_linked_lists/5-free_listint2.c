#include "lists.h"

/**
 * free_listint2- function that fress listint_t list
 * @head: pointer to a list
 * Return: 0 if successful
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
