#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coin to make
 * a change for an amount
 * @argc: number of command line arg
 * @argv: array that holds the command line arg...
 * Return: (0) if successful
 */
int main(int argc, char **argv)
{
	int x, min_coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	while (x > 0)
	{
		if (x >= 25)
			x -= 25;
		else if (x >= 10)
			x -= 10;
		else if (x >= 5)
			x -= 5;
		else if (x >= 2)
			x -= 2;
		else if (x >= 1)
			x -= 1;
		min_coin += 1;
	}
	printf("%d\n", min_coin);
	return (0);
}
