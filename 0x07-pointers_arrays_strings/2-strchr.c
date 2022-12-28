#include "main.h"
/**
 * _strchr- locates a character in a string
 *@s: pointer to string
 * @c: character
 * Return: c on success or else NULL
 */
char *_strchr(char *s, char c)
{
	long unsigned int i;
/**
*	for (; ; ++s)
*	{
*		if (*s == c)
*			return ((char *)s);
*		if (*s == '\0')
*			return (0);
*	}
*/
	for (i = 0; i < strlen(s); i++)
	{
		if(s[i] != c)
		{
			s += 2;
			return (s);
		}
	}
	return(NULL);
}
