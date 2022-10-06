#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * malloc_checked- Returns a pointer to the allocated memory
 * @b: size of memory
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	
	if (p == NULL)
		exit(98);
	else
	return (p);
}
