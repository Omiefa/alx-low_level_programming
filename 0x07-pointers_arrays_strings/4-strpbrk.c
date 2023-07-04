# include "main.h"
# include <string.h>

/**
 * _strpbrk- function that searches a string for any of a set of bytes
 * @s: input string pointer
 * @accept: string to search for match
 * Return: Null if no match and pointer for match
 */

char *_strpbrk(char *s, char *accept)
{
	char *match = strpbrk(s, accept);

	if (match  == NULL)
	{
		return (NULL);
	}

	return (match);
}
