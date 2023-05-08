#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changesd
 * Return: Changed array with new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
