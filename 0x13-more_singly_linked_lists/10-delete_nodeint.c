#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index of a
 * listint_t linked list
 * @head: double pointer to a list
 * @index: index of the node to be deleted
 * Return: the number of nodes printed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp_1;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	else
	{
		temp = *head;
		i = 1;
		while (i < (index - 1))
		{
			temp = temp->next;
			i++;

		}
		temp_1 = temp->next;
		temp->next = temp_1->next;
		free(temp_1);
	}
	return (1);
}
