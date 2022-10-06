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
	unsigned int l2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = (l1 + n);
	s = malloc(sizeof(char) * i + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (l2 = 0; l2 < n; l2++)
		s[l1 + l2] = s2[l2];
	s[l1 + l2] = '\0';
	return (s);
}
