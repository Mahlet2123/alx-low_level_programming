#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)

{
	int x;

	for (x = 97; x <= 122; x++)
		putchar(x);
	for (x = 65; x <= 90; x++)
		putchar(x);
	putchar(10);
	return (0);
}
