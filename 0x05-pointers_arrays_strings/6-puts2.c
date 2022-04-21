#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints the even numbers of an array string
 * @str: paramter
 *
 * Return: void.
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (1 % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
