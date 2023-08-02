#include "lists.h"

/**
 * get_nodeint_at_index-function that returns the nth node of a listint_t list
 *@head: pointer to a linked list
 * @index: the given position in the list
 * Return: the data at a given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x;

	for (x = 0; (x < index) && (head->next); x++)
		head = head->next;

	if (x < index)
	return (NULL);

	return (head);
}
