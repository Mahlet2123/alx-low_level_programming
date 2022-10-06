#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * malloc_checked- Returns a pointer to the allocated memory
 * 
 * Return: NULL (if size = 0)
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
