#include "lists.h"

/**
 * add_dnodeint_end- adds a new node at the end of a dlistint_t list
 * @head:double pointer to a list
 * @n: data of the new node
 * Return: the number of nodes printed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = 0;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next =  newnode;
		newnode->prev = temp;
	}

	return (temp);

}
