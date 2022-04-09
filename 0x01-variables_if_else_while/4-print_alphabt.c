#include <stdio.h>
/**
 * main- prints all alphabet in lower case
 * except q and e.
 * Return: 0 if successful.
 */
int main(void)
{
	char az = 'a';
	while(az <= 'z')
	{
		if (az != 'e' || az != 'q')
		{
		       putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
