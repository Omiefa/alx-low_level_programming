#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: number of command line arg..
 * @argv: array that contains the program command line arg
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int a, b, result = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[a]);
	}
	printf("%d\n", result);
	return (0);
}
