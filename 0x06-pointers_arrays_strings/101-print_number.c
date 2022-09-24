#include "main.h"
/**
 * print_number- prints an integer.
 * @n: an integer
 *Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
