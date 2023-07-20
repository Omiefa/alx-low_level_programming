#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all- function that returns the sum of all its parameters
 *@n: last named parameter
 *Return: 0 if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list input_num;
	int index, sum, m = n;

	if (n == 0)
		return (0);

	va_start(input_num, n);
	sum = 0;

	for (index = 0; index < m; index++)
	{
		sum += va_arg(input_num, int);
	}
	va_end(input_num);
	return (sum);
}
