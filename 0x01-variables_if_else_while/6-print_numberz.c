#include <stdio.h>
/**
 * main - prints out the numbers for 0 to 10
 * Return: 0 if successful else 1
 */

int main(void)
{
	int nu;

	for (nu = 0; nu < 10; nu++)
	{
		putchar((nu % 10) + '0');
	}

	putchar('\n');

	return (0);
}
