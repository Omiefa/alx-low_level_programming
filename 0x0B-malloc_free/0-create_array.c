#include "main.h"
#include <stdlib.h>

/**
  *create_array- function that creates an array of chars
  *@size: number of elements in the array
  *@c: variable that holhs the strings
  *Return:  NULL if size = 0
  **/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(char));

		for (count = 0; count < size; count++)
		{
			ptr[count] = c;
		}
		return (ptr);
	}

}
