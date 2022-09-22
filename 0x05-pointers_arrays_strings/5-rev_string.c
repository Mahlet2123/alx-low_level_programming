#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 *@s: string
 */

void rev_string(char *s)
{
	char c;
	int i, len;

	len = strlen(s);
	for (i = 0; i <= len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}
