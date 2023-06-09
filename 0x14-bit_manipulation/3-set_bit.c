#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @index: index of the bit to be set (starting from 0)
 * @n: number of the bit to be searched
 * Return: 1 on success or -1 if an error occurs
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
