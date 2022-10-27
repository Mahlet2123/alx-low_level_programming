#include "main.h"
#include <string.h>

/**
 * binary_to_uint- converts a binary number to an unsigned int.
 * @b: binary number as string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			val <<= 1;
			val += b[i] - '0';
		}
		else if (!(b[i] == '0' || b[i] == '1'))
		{
			return (0);
		}
	}
	return (val);
}
