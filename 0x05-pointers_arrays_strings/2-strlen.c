#include "main.h"
/**
 * _strlen - function that returns the length of
 * a string
 * @s: string
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\10')
	{
		longi++;
		s++;
	}
	return (longi);
}
