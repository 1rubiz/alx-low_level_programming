#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - copys a strig into a buffer
 * @dest: first parameter
 * @src: second paramter
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
