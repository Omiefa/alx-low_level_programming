#include "lists.h"

/**
 * add_node_end- adds new node at the end of a linked list
 * @head: double pointer, head of the linked list
 * @str: string to store in the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *c_node;
	size_t count;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	count = 0;
	while (str[count] != '\0')
		count++;

	n_node->len = count;
	n_node->next = NULL;
	c_node = *head;

	if (c_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (c_node->next != NULL)
			c_node = c_node->next;
		c_node->next = n_node;
	}

	return (*head);
}
