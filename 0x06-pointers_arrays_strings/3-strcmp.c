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
	int i, x;
	long int length1 = 0, length2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		length1++;
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		length2++;
	}

	if (length1 > length2)
	{
		return (15);
	} else if (length1 < length2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
