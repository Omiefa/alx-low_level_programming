#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked- function that allocates memory using malloc
 *@b: size of the requried memory in bytes
 *Return: a pointer for success and 98 for failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
