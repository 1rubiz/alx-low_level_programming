#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_rev - prints the given string in reverse.
 * @s: parameter.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	printf("%s\n", strrev(s));
}
