#include "main.h"

/**
 * print_last_digit - converts to a real number
 *
 *@i: intiger
 *
 * Return: int
 */

int print_last_digit(int i)
{

	i %= 10;

	if (i < 0)
	i *= -1;
	_putchar(i + '0');
	return (i);
}
