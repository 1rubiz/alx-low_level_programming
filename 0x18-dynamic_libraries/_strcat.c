#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings together
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
