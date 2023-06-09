#include "main.h"

/**
 * set_bit - function that returns the value of a bit
 * at a given index
 * @index: index of the bit
 * @n: number of the bit to be searched
 * Return: 1 on success or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
