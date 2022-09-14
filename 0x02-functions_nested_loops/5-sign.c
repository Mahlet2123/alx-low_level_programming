#include "main.h"

/**
 * print_sign - checks for sign for number n
 *
 * @n: to be checked for sign
 *
 * Return: 0, 1 or -1
 */

int print_sign(int n)
{
	if ((n > 0))
	{
		_putchar(43);
		return (1);
	}
	if ((n == 0))
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
