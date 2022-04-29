#include "main.h"

/**
 * _strlen_recursion - counts the length of string.
 * @s: parameter
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int index = 0, l = 1;

	if (s[index] != '\0')
		return (l + _strlen_recursion(s + 1));
	return (0);
}
