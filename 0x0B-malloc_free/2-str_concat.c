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
	int i;
	int l1 = strlen(s1);
	int l2 = strlen(s2);

	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		s[l1 + i] = s2[i];
	}
	return (s);
}
