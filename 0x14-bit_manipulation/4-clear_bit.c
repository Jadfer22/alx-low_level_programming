#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * clear_bit - function that sets the value of
 * a bit to 0 at a given index
 * @n: pointer to the number to be cleared
 * @index: index of the bit to be set (starting from 0)
 * Return: 1 if works, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
