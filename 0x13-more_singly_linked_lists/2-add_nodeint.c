#include "lists.h"

/**
 * add_nodeint- adds a node at the beginning of a listint_t list
 * @head: double pointer to a list
 * @n: data of the new node
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
