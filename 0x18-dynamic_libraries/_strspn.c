#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *j = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		if (!(*--accept))
			break;
		accept = j;
	}
	return (c);
}
