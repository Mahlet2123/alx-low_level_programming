#include "main.h"

/**
 * array_range- creates an array of integers
 * 
 * Return: NULL (on failure)
 */

int *array_range(int min, int max)
{
	int i, n;
	int *p;

	n = max -min;
	p = malloc(sizeof(int) * n + 1);

	if (min > max)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++, min++)
	{
			p[i] = min;
	}
	return (p);
}
