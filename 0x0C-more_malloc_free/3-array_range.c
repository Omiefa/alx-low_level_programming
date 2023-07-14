#include "main.h"
#include <stdlib.h>

/**
 *array_range- function that creates an array of integers
 *@min: minimum element of the array
 *@max: maximum element of the array
 *Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int counter, *ptr_arr, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr_arr = malloc(size * sizeof(int));

	if (ptr_arr == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		ptr_arr[counter] = min + counter;

	return (ptr_arr);
}
