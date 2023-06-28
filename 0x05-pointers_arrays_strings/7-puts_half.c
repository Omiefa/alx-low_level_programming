# include "main.h"
#include <string.h>
/**
 *puts_half-  prints half of a string, followed by a new line
 *@str: input string
 *Return: 0
 */
void puts_half(char *str)
{
	int m;

	int len = strlen(str);

	if (len % 2 == 0)
		for (m = (len / 2); m < len; m++)
		{
			_putchar(str[m]);
		}
	else
	{
		for (m = ((len + 1) / 2); m < len - 1; m++)
			_putchar(str[m]);
	}
	_putchar('\n');

}
