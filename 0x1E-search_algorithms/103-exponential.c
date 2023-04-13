#include "search_algos.h"

/**
 * exponential_search - searches for a val in a sorted arr using ESA
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int result, remove_count;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i >= size)
		newsize = size;
	else
		newsize = i + 1;
	remove_count = i >> 1; /* Equivalent to i / 2 */
	newsize -= remove_count;
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i + newsize - 1);
	result = binary_search(array + i, newsize, value);
	if (result == -1)
		return (-1);
	else
		return (result + (int)i);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 *
 * If value is not present in array or if array is NULL,
 * your function must return -1
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, i;
	int m;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array:");
		for (i = l; i < r; i++)
			printf(" %d,", array[i]);
		if (i == r)
			printf(" %d", array[i]);
		printf("\n");
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
