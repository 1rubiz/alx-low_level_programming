#include "main.h"

/**
 * main - prints the addition of two arguments.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv)
{
	int a, b, result;

	a = atoi(argv[1]);
	a = atoi(argv[2]);

	if (argc < 2)
	{
		putchar('0');
	}
	if (!isdigit(a) || !isdigit(b))
	{
		printf("Error\n");
		return (0);
	}
	result = a + b;
	printf("%d\n", result);
	return (0);
}
