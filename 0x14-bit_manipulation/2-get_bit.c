#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given
 * index
 * @n: unsigned long int
 * @index: index of the bit to get
 * Return: value of the bit at index, or 0 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
