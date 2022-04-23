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
	n = size_t n;
	size_t dest_lent = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_lent + i] = src[i];
		dest[dest_lent + i] = '\0';
	}
	return (dest);
}
