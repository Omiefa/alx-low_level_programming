#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a listint_t list
 * @head:double pointer to a list
 * @n: data of the new node
 * Return: the number of nodes printed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
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
	}

	return (temp);

}

