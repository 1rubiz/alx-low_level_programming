#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of the the multiple
 * of 3 and 5 less than 1024.
 * Return: 0 if successful.
 */

int main(void)
{
	unsigned long int x, y, z;
	int a;

	x = 0;
	y = 0;
	z = 0;

	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3) == 0)
		{
			x = x + a;
		} else if ((a % 5) == 0)
		{
			y = y + a;
		}
	}
	z = x + y;
	printf("%lu\n", z);
	return (0);
}
