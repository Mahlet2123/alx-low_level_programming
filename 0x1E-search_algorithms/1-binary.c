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
	int left, right, middle;
	int i;

	left = 0, right = (size - 1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);
		middle = (left + right) / 2;
		if (value > array[middle])
		{
			left = middle + 1;
		}
		else if (value < array[middle])
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
