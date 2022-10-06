#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: NULL (on failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int l1 = strlen(s1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc(sizeof(char) * (l1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[l1 + i] = s2[i];
	}
	return (s);
}
