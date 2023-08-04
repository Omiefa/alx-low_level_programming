#include "main.h"

/**
 * get_bit- function that returns the value of a bit at a given index
 * @n: the input number
 * @index: the index of the value to be returned
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int desire_value;

	if (index >= sizeof(unsigned long int) * 8 - 1)
		return (-1);

	desire_value = (n >> index) & 1;

	return (desire_value);
}
