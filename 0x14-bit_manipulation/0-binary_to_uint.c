#include "main.h"
#include <string.h>

/**
 * binary_to_uint- converts a binary number to an unsigned int.
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int val = 0, n = 1;

	len = strlen(b);
	if (b == NULL)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{	
			val = val + n;
			n = n * 2;
		}
		else if (b[i] == '0')
		{
			i++;
		}
		else 
			return (0);
	}
	return (val);
}
