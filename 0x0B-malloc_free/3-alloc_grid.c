#include "main.h"
/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 *@height: height of the grid
 * Return: NULL (str = NULL)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	array = malloc(width * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (array[i] == NULL)
		{
			return (NULL);
		}
	}
	return (array);
}
