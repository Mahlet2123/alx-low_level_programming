#include "main.h"
/**
 * _strchr- locates a character in a string
 *@s: pointer to string
 * @c: character
 * Return: c on success or else NULL
 */
char *_strchr(char *s, char c)
{
	for (; ; ++s)
	{
		if (*s == c)
			return ((char *)s);
		if (*s == '\0')
			return (0);
	}
}
