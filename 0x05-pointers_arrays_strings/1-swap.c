#include "main.h"

/**
 * swap_int - that swaps the values of two integers.
 *@a: one integer variable
 *@b: second integer variable
 * Return: 0
 */
void swap_int(int *a, int *b)

{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
