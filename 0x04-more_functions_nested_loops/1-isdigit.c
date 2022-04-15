#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c);

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	} else
	{
		return (0);
	}
}
