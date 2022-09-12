#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)

{
	int x;
	int y;
	int a;
	int b;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (a = 0; a < 10; a++)
			{
				for (b = 1; b < 10; b++)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(32);
					putchar(a + '0');
					putchar(b + '0');
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
