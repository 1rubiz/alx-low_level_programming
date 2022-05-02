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

int main(int argc, char *argv[])
{
	int i, j = 1;

	for (i = 0; i < argc; i++)
	{
		j += i;
	}
	printf("%d\n", j);
	return (0);
}
