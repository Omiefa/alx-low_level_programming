# include <stdio.h>

/**
 * main- program that prints all arguments it receives
 * @argc: counts the arguments passed
 * @argv: it is an array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
