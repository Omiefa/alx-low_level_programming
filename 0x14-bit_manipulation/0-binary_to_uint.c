#include "main.h"

/**
 * binary_to_uint-function that converts a binary number to an unsigned int
 * @b: pointer to the string
 * Return: the converted number or 0 if b is not 0||1 and b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int idx;

	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
	}

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] == '0')
			res = res * 2;
		else if (b[idx] == '1')
			res = res * 2 + 1;
	}
	return (res);
}
