#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all-prints anything
 * @format: a list of types of arguments passed to the
 * Return:0
 */
void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0;
	char *str;

	va_start(p, format);
	while (format && format[i])

	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(p, int));
			printf(", ");
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			printf(", ");
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			printf(", ");

			break;
		case 's':
			str = va_arg(p, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(p);
}
