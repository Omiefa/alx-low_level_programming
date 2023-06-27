# include "main.h"
# include <string.h>
/**
 *print_rev- prints a string, in reverse, followed by a new line
 *@s: text strings
 *Return: 0
 */
void print_rev(char *s)
{
	int m;
	int len = strlen(s);

	for (m = len - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
