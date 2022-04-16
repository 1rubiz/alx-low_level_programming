#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the fibonacci series between
 * 1 - 50.
 * Return: 0 if successful.
 */

int main(void)
{
	long int a, b, c, n;

	a = 1;

	b = 2;

	for (c = 1; c <= 50; ++c)
	{
		if (b != 20365011074)
		{
			printf("%lu, ", b);
		} else
		{
			printf("%lu\n", b);
		}
		n = b + c;
		b = c;
		c = n;
	}
	return (0);
}
