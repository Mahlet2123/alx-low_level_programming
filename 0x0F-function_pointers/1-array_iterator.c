#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator- executes a function given as a parameter on each element
 * @array: array of int
 * @size: size of the array
 * @action:pointer to function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0 && size != 0 && !(array == 0))
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
