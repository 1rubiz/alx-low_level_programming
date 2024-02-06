#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *                 the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located.
 *    If value is not present in array or if array is NULL, returns -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/**
	 * checks if the array pointer is null
	 */
	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
