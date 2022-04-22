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
	int i;
	int n = sizeof(a) / sizeof(*a);

	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(a[i]);

		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
