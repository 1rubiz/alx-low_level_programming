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
	while (*s)
	{
		if (*s == c || c == '\0')
			return (s);
		s++;
	}
	return (NULL);
}
