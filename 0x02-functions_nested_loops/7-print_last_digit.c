#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 *print_last_digit- prints the last digit of a value
 *@int: paraameter
 *
 * Return: the value of x.
 */

int print_last_digit(int);

int print_last_digit(int x)
{
	int x;
	x = x % 10;
	return (x);
}
