#include "main.h"

/**
 * flip_bits- returns the number of bits you would need to flip
 *@n: one number
 *@m: other number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip, count = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		count++;
		flip &= (flip - 1);
	}
	return (count);
}
