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
	unsigned int i, j, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;
	x = (i + n);
	s = malloc(x + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	for (y = 0; y < n; y++)
		s[x + y] = s2[y];
	s[x + y] = '\0';
	return (s);
}
