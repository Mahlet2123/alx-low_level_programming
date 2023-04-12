#include "search_algos.h"
/**
 * min - function to return minimum number
 * @a: first number
 * @b: second number
 * Return: int
 */

int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algorithm
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

int jump_search(int *array, size_t size, int value)
{
	size_t step;
	int prev = 0;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[min(step, size)] < value)
	{
		printf("Value checked array[%d] = [%d]\n", min(step, size), array[min(step, size)]);
		prev = step;
		step += step;
		if (prev >= (int) size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, min(step, size));
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", );
	if (array[prev] == value)
		return (prev);
	else
		return (-1);
}
