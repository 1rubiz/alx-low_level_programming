#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - It prints a name
 * @name: parameter for name.
 * @f: parameter for function.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
