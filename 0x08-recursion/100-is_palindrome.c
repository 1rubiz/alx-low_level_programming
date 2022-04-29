#include "main.h"

/**
 * int is_palindrome - checks for palindrome
 * @s: parameter
 *
 * Return: 1 if it is a palindroome and 0 if it is not
 */

int is_palindrome(char *s)
{
	int len = sizeof(s) / sizeof(*s), i = 0;

	if (i < len/2)
	{
		if (s[i] != s[len - 1 - i])
		{
			return (1);
		}
		return (0);
	}
}
