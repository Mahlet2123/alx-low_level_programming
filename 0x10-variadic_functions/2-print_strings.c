#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings- prints strings, followed by a new line.
 * @separator:the string to be printed between numbers
 * @n: number of strings passed to the function
 * Return:0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	void *str;
	
	*str = va_arg(ap, unsigned int);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%c", *separator);
	}
	printf("\n");
	va_end(ap);
}
