#include <stdio.h>
/**
 * main - sum up even fibonacci up to 4million
 *
 * Return: (0)
 */
int main(void)
{
	long int a, h = 1, k = 2, sum = 0, t_sum = 0;

	for (a = 0; a < 49; a++)
	{
		if ((k % 2 == 0) && (k <= 4000000))
		{
			t_sum = t_sum + k;
		}
		sum = h + k;
		h = k;
		k = sum;
	}
	printf("%ld\n", t_sum);

	return (0);
}
