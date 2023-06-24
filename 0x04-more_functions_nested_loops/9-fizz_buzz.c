# include <stdio.h>
/**
 * main- prints number from 1 to 100
 * for multiplies of 3 print Fizz and for five print Buzz
 * and for multiplies of both print FizzBuzz
 * Separate each number with space
 * Return: 0
 */
int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if ((z % 3 == 0) && (z % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		if (z % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		if (z % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		printf("%d ", z);
	}
	return (0);
}
