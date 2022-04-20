#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int i;
	int j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j++;
	}
	for (i = j - 1; i >= 0; i++)
	{
		return (*s);
	}
}
