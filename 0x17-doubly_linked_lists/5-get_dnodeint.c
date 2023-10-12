#include "lists.h"

/**
 * get_dnodeint_at_index-function that returns the nth node of a dlistint_t list
 *@head: pointer to a linked list
 * @index: the given position in the list
 * Return: the data at a given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t x;

	for (x = 0; (x < index) && (head->next); x++)
		head = head->next;

	if (x < index)
	return (NULL);

	return (head);
}
