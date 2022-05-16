#include "variadic_functions.h"

/**
 * print_numbers - prints number along with the seperator
 * @separator: separator
 * @n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(arg, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != (n))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
