#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the number of arguments passed into
 * it
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
