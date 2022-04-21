#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - generates random passwords
 * Return: 0 is successful.
 */

int main(void)
{
	int i, ramdomer;

	srand((unsigned int)(time(NULL)));

	char lowAlpha[] = "qwertyuiopasdfghjklzxcvbnm";
	char highAlpha[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char num[] = "0123456789";
	char sym[] = "!@#$%^&*()~|?<";
	char password[12];

	randomer = rand() % 4;

	for (i = 0; i < (sizeof(password) / sizeof(*password)); i++)
	{
		if (randomer == 1)
		{
			password[i] = lowAlpha[rand() % 26];
			randomer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomer == 2)
		{
			password[i] =  highAlpha[rand() % 26];
			randomer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomer == 3)
		{
			password[i] = num[rand() % 10];
			randomer = rand() % 4;
			printf("%c", password[i]);
		} else
		{
			password[i] = sym[rand() % 14];
			randomer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}
