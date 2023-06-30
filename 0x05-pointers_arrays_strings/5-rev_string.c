#include "main.h"
/**
 * rev_string - function that prints string
 * in reversed mode
 *
 * @s: the string input
 * Return: nothing
 */
void rev_string(char *s)
{
	int len, n;
	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len / 2; n++)
	{
		temp = s[n];
		s[n] = s[len - n - 1];
		s[len - n - 1] = temp;
	}
}
