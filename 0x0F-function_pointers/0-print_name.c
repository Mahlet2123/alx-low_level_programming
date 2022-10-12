#include "function_pointers.h"
#include <string.h>
/**
 * print_name- prints a name.
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
