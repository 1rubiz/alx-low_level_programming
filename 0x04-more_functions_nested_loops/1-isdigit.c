#include <stdio.h>
#include <stdlib.h>
/**
 * isdigit- checks if the number is between 0-9
 * @c: parameter
 *
 * Description: number checker
 * arghhhhhhhhh
 * Return: void
 */

int _isdigit(int c);

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);

	return (0);
}
