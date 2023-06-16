#include <stdio.h>
/**
 * main - prints out the lower case alphabets
 * Return: 0 if successful else 1
 */

int main(void)
{
	char lower_case_alp = 'a';

	for (lower_case_alp = 'a'; lower_case_alp <= 'z'; lower_case_alp++)
	{
		putchar(lower_case_alp);
	}

	putchar('\n');

	return (0);

}
