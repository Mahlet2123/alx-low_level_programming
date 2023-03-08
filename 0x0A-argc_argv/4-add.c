#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- entry point
 * @argc: arguement count
 * @argv: arguement array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, m, i = 1, sum = 0;

	if ((argc < 1))
	{
		printf("0\n");
	}
	for (m = 0; i < argc && argv[i][m]; m++)
	{
		if (isdigit(argv[i][m]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	for (n = 1; n < argc; n++)
	{
		sum = sum + atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (sum);
}
