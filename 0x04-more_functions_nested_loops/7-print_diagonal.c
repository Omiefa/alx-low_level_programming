# include "main.h"
/**
 *print_diagonal- print diagonal line on terminal
 *@n: character in ASCII code
 *Return: always 0
 */
void print_diagonal(int n)
{
	int h, k;

	for (h = 1; h <= n; h++)
	{
		if (n > 1)
		{
			for (k = 0; k < h; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}

	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
