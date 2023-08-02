#include "lists.h"
/**
 * insert_nodeint_at_index-insert a new node at a given position
 * @head: double pointer to a list
 * @idx: the given position to insert the new node
 * @n: the data of the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp1 = *head;
	unsigned int i;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = temp1;
		*head = temp;
		return (temp);
	}

	for (i = 1; i < idx; i++)
	{
		if (temp1 == NULL || temp1->next == NULL)
		return (NULL);

		temp1 = temp1->next;
	}

	temp->next = temp1->next;
	temp1->next = temp;

	return (temp);
}
