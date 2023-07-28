#include "lists.h"

/**
 * print_list- prints all the elements of a list_t list
 * @h: pointer to a list
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t nu_nodes;

	nu_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nu_nodes++;
	}
	return (nu_nodes);
}