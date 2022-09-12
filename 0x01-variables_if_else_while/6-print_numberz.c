#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)

{
	int x;

	for (x = 0; x <= 9; x++)
		putchar(x + '0');
	putchar(10);
	return (0);
}
