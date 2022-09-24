#include "main.h"
#include <string.h>

/**
 *_strncpy- function that copies a string
 *@dest: destination string
 *@src: source string
 *@n: number
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
/*
 *	int i;
 *
 *	for (i = 0; i < n && dest[i] != '\0'; i++)
 *	{
 *		dest[i] = src[i];
 *	}
 *	if (n > l)
 *		dest[i] = '\0';
 */
strncpy(dest, src, n);
return (dest);
}
