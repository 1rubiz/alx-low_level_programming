#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the requested number items
 * from an array
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		printf("%d", a[x]);
		if (x == (n - 1))
		{
			break;
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
