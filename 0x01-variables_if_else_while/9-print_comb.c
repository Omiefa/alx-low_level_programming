# include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 if successful else 1
 */

int main(void)
{
	int nu;

	for (nu = 0; nu <= 9; nu++)
	{
		putchar((nu % 10) + '0');
		if (nu == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
