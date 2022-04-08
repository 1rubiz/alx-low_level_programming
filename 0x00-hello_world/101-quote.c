#include <stdio.h>
#include <unistd.h>

/*
 * main - print out a certain string followed by anew line.
 * Return: 0 if failed and 1 foe success
 */
int main(void){
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
