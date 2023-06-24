# include "main.h"
/**
 *times_table- prints the 9 times table, starting with 0
 *Return: always 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);
		for (b = 1; b <= 9; b++)
		{
			c = (a * b);

			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(32);
			}
				_putchar((c % 10) + '0');
			if (b < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');

	}
}
