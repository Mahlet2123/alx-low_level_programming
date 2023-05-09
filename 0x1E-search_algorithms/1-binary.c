#include "search_algos.h"
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
 * Every time you compare a value in the array to the value you are searching,
 * you have to print this value
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
