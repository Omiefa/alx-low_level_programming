#include <stdio.h>
#include <stdlib.h>

/**
 * main- program that multiplies two numbers
 * @argc: counts the arguments
 * @argv: array of the arguments
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc <= 1)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		result = x * y;

		printf("%d\n", result);
	}
	return (0);
}
