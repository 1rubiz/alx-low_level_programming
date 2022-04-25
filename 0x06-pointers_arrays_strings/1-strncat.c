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
	int i = 0, length = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (length < n)
	{
		*(dest + i) = *(src + length);
		if (*(src + length) == '\0')
			break;
		i++;
		length++;
	}
	return (dest);
}
