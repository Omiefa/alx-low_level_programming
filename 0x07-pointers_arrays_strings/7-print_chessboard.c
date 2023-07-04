# include "main.h"

/**
 * print_chessboard- function that prints the chessboard
 * @a: array pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int d, e;

	for (d = 0; d < 8; d++)
	{
		for (e = 0; e < 8; e++)
		{
			_putchar(a[d][e]);
		}
		_putchar('\n');
	}
}
