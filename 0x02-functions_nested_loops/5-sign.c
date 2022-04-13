#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_sign- prints + if n>0, prints
 * 0 if n=0 and prints - if n <0.
 * @n: represents the value.
 *
 * Return: 0 if successful
 */
int print_sign(int n);

int print_sign(int n)
{
	if (n > 0)
	{
		printf("43");
		return (1);
	} else if (n == 0)
	{
		printf("48");
		return (0);
	} else if (n < 0)
	{
		printf("45");
		return (-1);
	}
	return (0);
}
