# include "main.h"
/**
 *print_sign- prints the sign of a number
 *@n: The character in ASCII code
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
	_putchar('\n');
}
