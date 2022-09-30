#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * @argc: arguement count
 * @argv: arguement array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, m, sum = 0;

	if ((argc < 1))
	{
		printf("0\n");
	}
	for (m = 1; m < argc; m++)
	{
		if ((*argv[m] < 48 && *argv[m] > 57))
		{
		printf("Error\n");
		return (1);
		}
	}
	for (n = 1; n < argc; n++)
	{
		sum = sum + atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (sum);
}
