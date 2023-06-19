# include <stdio.h>
/**
 * main- prints all possible different combination of two digits
 * Numbers must be separated by , followed by space
 * 01 and 10 are considered the same
 * Numbers to be printed in ascending order
 * use putchar and not printf or puts
 * Return: always 0
 */
int main(void)
{
	int nu_1, nu_2;

	nu_1 = '0';
	nu_2 = '0';

	while (nu_1 <= '9')
	{
		while (nu_2 <= '9')
		{
			if (nu_1 < nu_2)
			{
				putchar(nu_1);
				putchar(nu_2);

				if (nu_1 != '8' || (nu_1 == '8' && nu_2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			nu_2++;
		}
		nu_1++;
		nu_2 = '0';
	}
	putchar('\n');

	return (0);

}
