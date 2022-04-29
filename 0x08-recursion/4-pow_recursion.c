#include "main.h"

/**
 * _pow_recursion - returns the first parameter raised
 * to the power of the second parameter
 * @x: first parameter
 * @y: second parameter
 *
 * Return: the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
