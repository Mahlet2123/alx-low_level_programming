#include "main.h"
#include <string.h>

/**
 *_strcat- function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int l1 = strlen(dest);
	int l2 = strlen(src);
	int i;

	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
return (dest);
}
