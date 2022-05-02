#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		putchar(argv[i]);
		putchar('\n');
	}
	return (0);
}
