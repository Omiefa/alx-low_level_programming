#include "lists.h"

/**
 * add_node- adds new node at the beginning of the list
 * @head: double pointer
 * @str: character string
 * Return:address to the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodeA;
	size_t x = 0;

	nodeA = (list_t *)malloc(sizeof(list_t));
	if (nodeA == NULL)
		return (NULL);

	nodeA->str = strdup(str);

	while (str[x] != '\0')
		x++;

	nodeA->len = x;
	nodeA->next = *head;
	*head = nodeA;

	return (*head);
}
