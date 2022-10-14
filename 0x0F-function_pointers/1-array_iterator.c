#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array.
 * @size: Size of the array.
 * @action: Pointer to the function you need to use.
 * @array: Given array
 *
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
