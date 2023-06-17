#include <stdio.h>
/**
 * main - prints out the lower case alphabets in reverse order
 * Return: 0 if successful else 1
 */

int main(void)
{
	char let_rev;


	for (let_rev = 'z'; let_rev >= 'a'; let_rev--)
	{
		putchar(let_rev);
	}

	putchar('\n');

	return (0);
}
