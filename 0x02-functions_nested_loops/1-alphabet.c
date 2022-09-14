#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * _putchar - prints character
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);

	return (0);
}
