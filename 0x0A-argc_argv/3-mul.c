#include "main.h"

/**
 * main - multiplies two
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = a * b;
	printf("%d\n", result);
	return (0);
}
