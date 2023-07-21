#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings- function that prints strings, followed by a new line
 *@separator: string separator
 *@n:number of strings passed to the function
 *Return: always 0 in successful
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);

	}
	va_end(string);
	printf("\n");
}
