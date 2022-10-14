#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function to be used to compare values.
 * @array: Given array.
 *
 * Return: 0 or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
