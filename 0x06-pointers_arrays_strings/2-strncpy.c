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
	strncpy(dest, src, n);

	return (0);
}
