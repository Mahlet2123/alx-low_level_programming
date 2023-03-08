#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL (on failure)
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int l1 = strlen(s1);
	int l2 = strlen(s2);

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s1)
	{
		s[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		s[i] = *s2;
		i++;
		s1++;
	}
	return (s);
}
