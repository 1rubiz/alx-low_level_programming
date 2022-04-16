#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds and prints the sum of the even values
 * of a fibonacci series
 * Return: 0 if successful.
 */

int main(void)
{
	int x;
	long int y, z, n, s;

	y = 1;
	z = 2;
	s = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			s = s + y;
		}
		n = y + z;
		y = z;
		z = n;
	}
	printf("%lu\n", s);
	return (0);
}
