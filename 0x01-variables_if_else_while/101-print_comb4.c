# include <stdio.h>
/**
 * main- prints all possible different combinations of three digits.
 *
 * Return: always 0
 */
int main(void)
{
	int nu_1, nu_2, nu_3;

	nu_1 = '0';

	while (nu_1 <= '9')
	{
		nu_2 = '0';

		while (nu_2 <= '9')
		{
			nu_3 = '0';

			while (nu_3 <= '9')
			{

				if (nu_1 < nu_2 && nu_2 < nu_3)

				{
					putchar(nu_1);
					putchar(nu_2);
					putchar(nu_3);

					if (nu_1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				nu_3++;
			}
			nu_2++;
		}
		nu_1++;
	}
	putchar('\n');
	return (0);
}
