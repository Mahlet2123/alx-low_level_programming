#include "main.h"

/**
 * _puts_recursion-  prints a string
 *@s: string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[n]);
	n++;
	_puts_recursion(s + 1);

}
