#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
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
 * Every time you split the array, you have to print the new array
 *
 * You have to use recursion. You may only use one loop
 * in order to print the array
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int res;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	if (size == 1 && array[0] != value)
		return (-1);

	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		else
			return (mid);
	}
	else if (array[mid] < value)
	{
		res = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (res == -1)
			return (-1);
		else
			return (res + mid + 1);
	}
	else
		return (advanced_binary(array, mid + 1, value));
}
