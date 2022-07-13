#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
