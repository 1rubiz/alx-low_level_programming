#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: parameter
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	int x = sizeof(*s) / sizeof(s);

	if (s[x] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[x]);
	}
}
