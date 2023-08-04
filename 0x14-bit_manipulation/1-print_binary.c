#include "main.h"

/**
 * print_binary- function that prints the binary representation of a number
 * @n: the given number a base order than base 2
 * Return: the binary equivalent of the give number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
