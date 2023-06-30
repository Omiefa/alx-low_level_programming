# include "main.h"
/**
 *string_toupper- changes all lowercase letters of a string to uppercase
 *@s: input string
 * Return: always 0
 */

char *string_toupper(char *s)
{
	int n, m = 'c' - 'C';

	for (n = 0; s[n]; n++)
	{
		if ((s[n] >= 'a') && (s[n] <= 'z'))
			s[n] -= m;
	}
	return (s);
}
