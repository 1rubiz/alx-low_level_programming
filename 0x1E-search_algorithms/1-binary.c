#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: sorted array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i = 0;
	if (array == NULL)
	{
		return (-1);
	}
	while(left <= right) {
		int mid = left + (right - 1) / 2;
  
		if (array[mid] == value){
			return mid;
		}

		if (array[mid] < value){
			left = mid + 1;
		} else{
			right = mid - 1;
		}
		return -1;
	}
}
