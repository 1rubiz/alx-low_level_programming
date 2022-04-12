#include <stdio.h>
/**
 * main- prints all alphabets in lower case
 * Return: 0 if successful
 */
void print_alphabet(void);

print_alphabet()
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
