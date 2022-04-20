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
	int i;
	int j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j++
	}
	for (i = j - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
}
