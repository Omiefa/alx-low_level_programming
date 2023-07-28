#include "lists.h"

/**
 * list_len- prints the number of elements in a linked list
 * @h: pointer to a singly linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nu_nodes;

	nu_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nu_nodes++;
	}
	return (nu_nodes);
}
