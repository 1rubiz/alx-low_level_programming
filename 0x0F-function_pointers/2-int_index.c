#include "function_pointers.h"

/**
 * int_index - it searches for an integer in an array
 * @array: parameter for array
 * @size: parameter for length of array
 * @cmp: function that runs the comparison
 *
 * Return: void.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
