#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	char *temp_cpy;
	unsigned long int indx, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	temp_cpy = strdup(value);
	if (temp_cpy == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	for (n = indx; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = temp_cpy;
			return (1);
		}
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(temp_cpy);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = temp_cpy;
	temp->next = ht->array[indx];
	ht->array[indx] = temp;

	return (1);
}
