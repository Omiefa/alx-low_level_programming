# include "main.h"
/**
 *print_square- prints a square, followed by a new line
 *@size: size of square
 *Return: always 0
 */
void print_square(int size)
{
	int p, q;

	if (size > 0)
	{
		for (p = 0; p < size; p++)
		{
			for (q = 0; q < size; q++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}

}
