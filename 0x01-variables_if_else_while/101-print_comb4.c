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
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x < y)
				{
					if (y < z)
					{
						putchar(x + '0');
						putchar(y + '0');
						putchar(z + '0');

							if (x < 7)
							{
								putchar(44);
								putchar(32);
							}
					}
				}
			}	
		}
	}
	putchar(10);
	return (0);
}
