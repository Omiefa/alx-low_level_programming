# include "main.h"
# include <string.h>

/**
 * _strstr- function that locates a substring
 * @haystack: input string
 * @needle: substring used for search
 * Return: Null if not found & pointer if found
 */

char *_strstr(char *haystack, char *needle)
{
	char *found = strstr(haystack, needle);

	if (found == NULL)
	{
		return (NULL);
	}

	return (found);
}
