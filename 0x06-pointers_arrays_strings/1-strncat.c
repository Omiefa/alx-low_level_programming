# include "main.h"
# include <string.h>

/**
 *_strncat- concatenates two strings
 *@dest: destination of string
 *@src: source of string
 *@n: number of bytes to append
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
