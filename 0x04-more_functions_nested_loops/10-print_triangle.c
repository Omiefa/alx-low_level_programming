# include "main.h"
/**
 *print_triangle- prints a triangle, followed by a new line
 *@size: If size>=0, the function should print only a new line
 *Return: 0
 */
void print_triangle(int size)
{
	int m, n;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				if (n < size - (m + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
