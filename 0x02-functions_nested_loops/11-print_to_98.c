#include"main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n
 *@n: the number
 * Return: n
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	/*printf("98");*/
	}
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	/*printf("98");*/
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
