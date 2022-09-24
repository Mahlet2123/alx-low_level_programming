#include "main.h"
/**
 * rot13-  encodes a string into rot13
 * @s: string to code
 * Return: the enconde string.
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}
	return (s);
}
