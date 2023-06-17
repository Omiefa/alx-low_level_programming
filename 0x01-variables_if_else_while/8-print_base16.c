#include <stdio.h>
/**
 * main - prints out the hexdecimal numbers
 * Return: 0 if successful else 1
 */

int main(void)
{
	int nu;
	char ch;

	for (nu = 0; nu < 10; nu++)
	{
		putchar((nu % 10) + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
