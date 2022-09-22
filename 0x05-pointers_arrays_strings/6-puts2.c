#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int i, l, j;

	l = strlen(str);
	for (i = 0; i <= (l / 2); i++)
	{
		j = i * 2;
		if (str[j] != '\0')
		{
			_putchar(str[j]);
		}
	}
_putchar(10);
}
