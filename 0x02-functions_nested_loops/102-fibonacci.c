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

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
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
