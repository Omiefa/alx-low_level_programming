# include "main.h"
/**
 * print_alphabet_x10- Print ten times the alphabets in lowercase
 * Return: Always 0 for success
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);

		}
		_putchar('\n');
	}
}
