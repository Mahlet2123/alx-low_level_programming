#include "main.h"
#include <string.h>
/**
 * string_toupper- changes all lowercase letters of a string to uppercase
 *@a: string pointer
 *Return: char
 */
char *string_toupper(char *a)
{
	int i, l;

	l = strlen(a);
	for (i = 0; i < l; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		else
		{
			a[i] = a[i];
		}
	}
	/*_putchar('\n');*/
	return (a);
}
