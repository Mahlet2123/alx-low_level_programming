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
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * (strlen(str) + 1));
	if (!(s = malloc(sizeof(char) * (strlen(str) + 1))))
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
