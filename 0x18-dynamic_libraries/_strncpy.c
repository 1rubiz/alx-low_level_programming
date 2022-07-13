#include "main.h"

/**
 * _strncpy - copy only the set numbers of character
 * from src to dest.
 * @dest: firsr parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
