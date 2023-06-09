#include "main.h"
#include <stdio.h>

/**
* flip_bits - function that returns the number of bits to be
* flipped so as to get one number to another
* @n: first number
* @m: second number
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int nflip;

	nflip = n ^ m;
	while (nflip)
{
	num += nflip & 1;
	nflip >>= 1;
}
return (nflip);
}

