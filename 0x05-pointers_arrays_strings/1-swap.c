#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of the parameter
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
