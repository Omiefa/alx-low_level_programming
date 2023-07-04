# include "main.h"
# include <string.h>

/**
 * _strspn- function that gets the length of a prefix substring
 * @s: input string pointer
 * @accept: set of characters to search for
 * Return:length of the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos = strspn(s, accept);

	return (pos);
}
