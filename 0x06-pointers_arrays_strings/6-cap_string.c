#include "main.h"
#include <string.h>
/**
 * cap_string- capitalizes all words of a string.
 *@str: string
 *Return: char
 */
char *cap_string(char *s)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int a = 0;
	long unsigned int i;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (i = 0; i < strlen(spc) ; i++)
		{
		if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			s[a] = s[a] - 32;
		}
	}
return (s);
}
