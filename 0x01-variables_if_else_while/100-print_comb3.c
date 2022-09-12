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

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x < y)
			{
				putchar(x + '0');
				putchar(y + '0');
					if (x < 8)
					{
						putchar(44);
						putchar(32);
					}
			}
		}
	}
	putchar(10);
	return (0);
}
