# include "main.h"
# include <string.h>
/**
 *puts2- prints every other character of a string,
 *starting with the first character
 *@str: input string
 *Return: 0
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
