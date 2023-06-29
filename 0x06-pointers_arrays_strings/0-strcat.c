# include "main.h"
# include <string.h>

/**
 *_strcat- function that concatenates two strings
 *@dest: destination of the string
 *@src: source of the string
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
