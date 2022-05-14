#include "function_pointers.h"

/**
 * array_iterator - it runs a function on each element
 * of an array
 * @array: array system
 * @size: length of the array
 * @action: function to be taken.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
