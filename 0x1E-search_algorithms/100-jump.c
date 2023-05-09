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
	size_t current = 0, step = sqrt(size);

	if (!array)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		current += step;
	}

	step = current - step;
	printf("Value found between indexes [%lu] and [%lu]\n", step, current);
	if (current >= size)
		current = size - 1;
	while (step <= current)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}
	return (-1);
}
