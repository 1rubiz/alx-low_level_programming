#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _islower- returns 1 is the value is lower case
 * and 0 if it is not.
 */
int _islower(int c);

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	} else {
		return (0);
	}
}
