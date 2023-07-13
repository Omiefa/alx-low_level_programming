#include "main.h"
/**
 * reverse_array - a function that reverse an array
 *
 * @a: pointer to an array
 * @n: number of element in an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k = 0, temp;

	n = n - 1;

	for (k = 0; k < n; k++)
	{
		temp = a[k];
		a[k] = a[n];
		a[k] = temp;
		n--;
	}
}
