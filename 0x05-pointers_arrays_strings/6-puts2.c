#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int i = 0, len;

	len = strlen(str);
	for (; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
