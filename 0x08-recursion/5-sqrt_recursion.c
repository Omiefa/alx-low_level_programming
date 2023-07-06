# include "main.h"

/**
 *sq_fun- prints the natural square root of a number
 * @i: input number
 * @j: iterator
 * Return: square root or -1
 */

int sq_fun(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (sq_fun(i, j + 1));
}

/**
 *_sqrt_recursion- function that prints the natural square root of a number
 *@n: input integer number
 *Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sq_fun(n, 0));
}
