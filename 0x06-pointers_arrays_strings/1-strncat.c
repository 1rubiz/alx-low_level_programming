#include "main.h"
/**
 * _strncat - concatenates only the selected amount
 * from the the first parameter in to the other.
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (0);
}
