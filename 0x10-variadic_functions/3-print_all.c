#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of all arguments passed to the function.
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	unsigned int count;
	va_list pa;
	char *s, *sep;

	va_start(pa, format);

	sep = "";

	count = 0;
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%s%c", sep,  va_arg(pa, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(pa, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(pa, double));
				break;
			case 's':
				s = va_arg(pa, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				count++;
				continue;
		}
		sep = ", ";
		count++;
	}

	printf("\n");
	va_end(pa);
}
