#include "main.h"

/**
 * flip_bits- function that returns the number of bits
 * @n: the input number
 * @m: second number
 * Return: the value of the bit
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int idx, count = 0;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (idx = 63; idx >= 0; idx--)
	{
		curr = ex >> idx;
		if (curr & 1)
			count++;
	}

	return (count);
}
