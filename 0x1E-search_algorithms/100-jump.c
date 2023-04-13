#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of ints using the JSA
 * @array: pointer to first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of value in array or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step = sqrt(size);

	if (!array)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	step = prev - step;
	printf("Value found between indexes [%lu] and [%lu]\n", step, prev);
	if (prev >= size)
		prev = size - 1;
	while (step <= prev)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}
	return (-1);
}
