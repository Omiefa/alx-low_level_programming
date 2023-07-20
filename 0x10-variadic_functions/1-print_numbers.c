#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers- function that prints numbers, followed by a new line
 *@separator: character separator
 *@n: number og arguments
 *Return: 0 if successful
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int count, x = n;

	va_start(list, n);

	for (count = 0; count < x; count++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL)
			if (count + 1 != x)
				printf("%s", separator);
	}
	va_end(list);
	printf("\n");

}
