#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: first parameter
 * @c: second parameter
 *
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return (s);
	}
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
