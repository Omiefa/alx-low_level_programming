# include <stdio.h>
# include "main.h"

/**
 *print_diagsums- sum of the two diagonals of a square matrix of integers
 * @a: pointer to an array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int k, m, sum1 = 0, sum2 = 0;

	for (k = 0; k <= (size * size); k = k + size + 1)
	{
		sum1 = sum1 + a[k];
	}
	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
	{
		sum2 = sum2 + a[m];
	}
	printf("%d, %d\n", sum1, sum2);
}
