#include "main.h"
#include <string.h>

/**
 *_strncpy- function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *@n: number
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
