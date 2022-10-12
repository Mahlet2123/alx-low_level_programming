#include "function_pointers.h"
#include <string.h>
/**
 * print_name- prints a name.
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f = _puts;
	f(name);
}	
void _puts(char *name)
{
	int i = 0;

	while ((name[i]) != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}
