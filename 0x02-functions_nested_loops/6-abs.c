#include "main.h"

/**
 * _abs - converts to a real number
 *
 *@i: intiger
 *
 * Return: int
 */

int _abs(int i)
{
	if ((i >= 0))
	{
		_putchar(i);
		return (i);
	}
	else if (i < 0)
	{
		(i = i * (-1));
		_putchar(i);
	}
	return (i);
}
