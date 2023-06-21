#include "main.h"

/**
 * print_alphabet- prints the alphabets in lowercase
 *
 * Return: always 0 for success
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
