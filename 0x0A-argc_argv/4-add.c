#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the addition of two arguments.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a, j, result = 0;

	for (a = 1; a < argc; a++)
	{
		int value = atoi(argv[a]);

		if (argc == 1)
		{
			putchar('0');
			putchar('\n');
		}
		for (j = 0; argv[a][j] != '\0'; j++)
		{
			if (!isdigit(argv[a][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += value;
	}
	printf("%d\n", result);
	return (0);
}
