#include "main.h"

/**
 * reverse_array - reverses an integer array
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0; x < n; x++)
	{
		for (y = (i + 1); y > 0; y++)
		{
			z =  *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = z;
		}
	}
}
