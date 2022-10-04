#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars
 *
 * Return: NULL (if size = 0)
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size);
	if (str == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
