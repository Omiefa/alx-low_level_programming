# include "main.h"

/**
 * _strlen_recursion- function that returns the length of a string
 * @s: input char string
 * Return: 0 for empty and integer for string
 */

int _strlen_recursion(char *s)
{
	int lent;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		lent = 1 + _strlen_recursion(s + 1);
		return (lent);
	}
}
