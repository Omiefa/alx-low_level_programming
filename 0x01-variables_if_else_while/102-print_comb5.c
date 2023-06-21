# include <stdio.h>
/**
 * main- prints all possible combinations of two two-digit numbers from 0 to 99
 * The combination of numbers must be separated by comma, followed by a space
 *
 * Return: always 0
 */
int main(void)
{
	int nu_1, nu_2;
	int a, b, c, d;

	for (nu_1 = 0; nu_1 <= 99; nu_1++)
	{
		for (nu_2 = 0; nu_2 <= 99; nu_2++)
		{
			a = nu_1 / 10;
			b = nu_1 % 10;
			c = nu_2 / 10;
			d = nu_2 % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (a != '9' && b != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
