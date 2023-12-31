#include "main.h"
#include <stdlib.h>

/**
 * _realloc- function that reallocates a memory block using malloc and free
 * @ptr: pointer to void data type
 * @old_size: initial size of the memory block
 * @new_size: new size of the memory block
 * Return: the pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr = ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));


	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			new_ptr[index] = old_ptr[index];
	}

	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			new_ptr[index] = old_ptr[index];
	}
	free(old_ptr);
	return (new_ptr);
}
