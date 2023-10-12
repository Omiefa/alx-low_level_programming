#include "lists.h"

/**
 * add_dnodeint- adds a node at the beginning of a dlistint_t list
 * @head: double pointer to a list
 * @n: data of the new node
 * Return: the address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;

	return (*head);
}
