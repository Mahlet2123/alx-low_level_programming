#include "main.h"
#include <string.h>

/**
 *_strncat- function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *@n: number
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1 = strlen(dest);
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[l1 + i] = src[i];
	}
return (dest);
}
