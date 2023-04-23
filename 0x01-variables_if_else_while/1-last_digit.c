#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that will assign a random number to the variable n each time it is exwcuted
 *
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", a);
	}
        else if (a == 0)
	{
	        printf("last digit of %d is %d and is less than 6 not 0\n", a);
	}
       	return (0);
}
