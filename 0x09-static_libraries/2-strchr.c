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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
