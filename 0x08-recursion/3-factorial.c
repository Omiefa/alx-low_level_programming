# include "main.h"

/**
 *factorial- unction that returns the factorial of a given number
 *@n: input integer value
 *Return: integer
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
		return (i);
	}
}
