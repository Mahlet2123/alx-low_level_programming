#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup- returns a pointer to a copy of the string
 * @str: string to be copied
 * Return: NULL (str = NULL)
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(*str));
	for (i = 0; i < strlen(str); i++)
	{
		p[i] = str[i];
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (p);
}
