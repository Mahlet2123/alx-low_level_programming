#include "main.h"
#include <string.h>
/**
 * _strspn- gets the length of a prefix substring.
 *@accept: string
 *@s: string
 *Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i <= strlen(accept); i++)
	{
		for (j = 0; j <= strlen(s); j++)
		{
			if (s[j] == accept[i])
			{
				break;
			}
		}
	}
return (i);
}
