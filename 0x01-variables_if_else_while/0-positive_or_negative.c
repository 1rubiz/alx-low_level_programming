#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - prints "n" is either positive, negative
 * or zero depending on the number.
 */
/* betty style doc for function main goes there */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
        if(n>0){
		printf("%d is positive", n);
	}else if(n<0){
		printf("%d is negativ", n);
	}else{
		printf("%d is zero", n);
	}
	return (0);

}
