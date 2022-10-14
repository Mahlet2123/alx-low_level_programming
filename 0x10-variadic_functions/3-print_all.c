#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_all-prints anything
 * @format: a list of types of arguments passed to the
 * Return:0
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i, arg_num;
	char x;
	int y;
	float z;
	char *w;

	va_start(all, format);
	arg_num = strlen(format);
	for (i = 0; i < arg_num; i++)
	{
		if (format[i] == 'c')
		{
			char x = va_arg(all, char);
			printf("%c", x);
		}
		else if (format[i] == 'i')
		{
			int y = va_arg(all, int);
			printf("%d", x);
		}
		else if (format[i] == 'f')
		{
			float z = va_arg(all, float);
			printf("%f", x);
		}
		else if (format[i] == 's')
		{
			char * w = va_arg(all, char *);
			printf("%s", x);
		}
		if (x == NULL)
			printf("(nil)");
		if (i != (arg_num - 1))
			printf("%c", ',');
	}
	putchar('\n');
	va_end(all);
}
