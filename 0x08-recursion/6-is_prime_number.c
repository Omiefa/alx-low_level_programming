#include "main.h"

/**
 * prime_fun - Calculate if its a prime
 * @x: input
 * @y: divisor
 * Return: (0)
 */
int prime_fun(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (prime_fun(x, y + 1));
}
/**
 * is_prime_number - detect if its a prime no
 * @n: the input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_fun(n, 2));
}
