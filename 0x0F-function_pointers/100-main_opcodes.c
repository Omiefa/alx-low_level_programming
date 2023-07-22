#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	char *ptr_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr_arr = (char *)main;

	for (index = 0; index < bytes; index++)
	{
		if (index == bytes - 1)
		{
			printf("%02hhx\n", ptr_arr[index]);
			break;
		}
		printf("%02hhx ", ptr_arr[index]);
	}
	return (0);
}
