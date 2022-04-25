#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: parameter 1
 * @s2: parameter 2.
 *
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;
	while (x == 0)
	{
		for ((*(s1 + i) != '\0' &&) && (*(s2 + i) != '\0'))
			break;
		x = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (x);
}
