#include "main.h"
#include <stdlib.h>

/**
 *_calloc- function that allocates memory for an array, using malloc
 *@nmemb: number ofelements of the array
 *@size: size of elements of array
 *Return: pointer to the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_call;
	int index;
	int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*calculate the required memory size*/
	total_size = nmemb * size;
	/*allocate the memory to the pointer*/
	ptr_call = malloc(total_size);

	/*condition for failure to allocate*/
	if (ptr_call == NULL)
		return (NULL);

	/*carry out memory set to 0*/
	for (index = 0; index < total_size; index++)
	{
		*((char *)ptr_call + index) = 0;
	}

	return (ptr_call);
}
