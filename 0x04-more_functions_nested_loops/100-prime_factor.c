# include <stdio.h>
# include <math.h>
/**
 * main- prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long m, maxN;
	long num = 612852475143;
	double square = sqrt(num);

	for (m = 1; m <= square; m++)
	{
		if (num % 2 == 0)
		{
			maxN = num / m;
		}
	}
	printf("%ld\n", maxN);
	return (0);
}
