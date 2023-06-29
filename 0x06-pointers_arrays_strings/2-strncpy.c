# include "main.h"
# include <string.h>

/**
 *_strncpy- copies n bytes of a string
 *@dest: destination of string
 *@src: source of string
 *@n: number of bytes to copy
 *Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
