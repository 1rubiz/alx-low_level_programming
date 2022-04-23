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
	long int i, length;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
		dest[length + i] = '\0';
	}
	return (dest);
}
