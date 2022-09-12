#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)

{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (x = 97; x <= 102; x++)
		putchar(x);
	putchar(10);
	return (0);
}
