#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion- prints a string in reverse
 *@s: string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	int n = 0;	
	
	if (s[n] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
}
