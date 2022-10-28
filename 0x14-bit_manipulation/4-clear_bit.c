#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @n: decimal number
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
		return (-1);
	bit = (~(bit << index));
	*n = (*n & bit);
	return (1);
}
