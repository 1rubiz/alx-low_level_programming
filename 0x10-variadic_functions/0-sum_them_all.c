#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments given
 * @n: parameter 1
 *
 * Return: the sum all the parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start (arg, n);
		
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, int);
		}
	va_end(arg);
	return (sum);
}
