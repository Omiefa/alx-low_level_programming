#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 for ERROR such as symbols and 0 if nothing is passed,
 */

int main(int argc, char *argv[])
{
	int n, m;
	int i = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] < '0' || argv[n][m] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[i]);
	}
	printf("%d\n", i);
	return (0);
}
