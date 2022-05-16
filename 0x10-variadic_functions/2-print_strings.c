#include "variadic_functions.h"

/**
 * print_strings - it prints strings along with its seperator
 * @separator: separator
 * @n: number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i;
	char *str;

	if (separator == NULL)
	{
		return;
	}

	va_start(arg, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(arg, char *);

		if (str)
		{
			printf("%s", str);
		} else
		{
			printf("(nil)");
		}
		if (i != (n))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
