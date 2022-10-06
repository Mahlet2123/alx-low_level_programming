#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc- allocates memory for an array
 * @nmemb: elements in the array
 * @size: bytes
 * Return: NULL (on failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	str = malloc(nmemb * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = 0;
	}
	return (str);
}
