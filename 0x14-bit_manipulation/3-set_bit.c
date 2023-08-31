#include "main.h"

/**
 * set_bit- function that sets the value of a bit to 1 at a given index
 * @n: pointer to the input number
 * @index: the index of the value to be set to 1
 * Return: the value of the bit at index index or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1 << index;
	*n |= set;

	return (1);

}
