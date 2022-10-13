#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers- prints numbers, followed by a new line.
 * @separator:the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return:0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%c", *separator);
	}
	printf("\n");
	va_end(ap);
}
