#include "main.h"

/**
 * is_prime_number - prints 1 if the parameter is a prime
 * number and 0 if it is not
 * @n: parameter
 *
 * Return: n
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
