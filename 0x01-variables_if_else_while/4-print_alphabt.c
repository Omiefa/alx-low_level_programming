#include <stdio.h>
/**
 * main - prints out the lower case alphabets
 * Return: 0 if successful else 1
 */

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'e' && let != 'q')
		{
			putchar(let);
		}

	}

	putchar('\n');

	return (0);

}
