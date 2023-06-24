# include "main.h"
/**
 *print_line- draws a straight line in the terminal
 *@n: length of line
 * Return: always 0
 */
void print_line(int n)
{
	int m;

	for (m = 0; m <= n; m++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
