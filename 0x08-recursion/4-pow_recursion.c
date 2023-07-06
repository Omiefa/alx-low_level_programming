# include "main.h"

/**
 * _pow_recursion- returns the value of x raised to the power of y
 * @x: base input argument
 * @y: exponet input argument
 * Return: -1 for y <0, 1 for y==0 and expo multiple base
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
