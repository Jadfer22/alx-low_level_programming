#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguements paased into it
 * @argc: counts of arguements
 * @argv: arrays of arguementa
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
