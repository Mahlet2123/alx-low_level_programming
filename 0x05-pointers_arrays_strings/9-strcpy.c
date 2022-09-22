#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string
 *
 *@src: source string
 *
 *@dest: destination string
 *
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	if (dest == NULL)
	{
	return (NULL);
	}
	l = strlen(src);
	for (i = 0; i <= l + 1; i++)
	{
		dest[i] = src[i];
	}
	/*_putchar('\n');*/
	return (dest);
}
