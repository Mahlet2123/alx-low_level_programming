#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of int
 * @size: size of the array
 * @cmp:pointer to function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != 0 && size != 0 && !(array == 0))
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
			{
				return (index);
			}
		}
	}
	return (-1);
}
