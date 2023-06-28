# include "main.h"
# include <stdio.h>
/**
 *print_array- prints n elements of an array of integers,
 *followed by a new line.
 *@a: integer array pointer
 *@n: input array
 *Return: 0
 */

void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n - 1; i++)
	{
		if (n <= 0)
		{
			printf("%d", a[i]);
		}
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);

}
