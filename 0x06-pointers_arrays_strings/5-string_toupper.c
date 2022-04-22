#include "main.h"

/**
 * string_toupper - prints a string to upper caase
 * @s: parameter.
 *
 * Return: void.
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
}
