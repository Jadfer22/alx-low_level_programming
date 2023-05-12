#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints the multiplications of two integers
 * @argc: counts of arguments
 * @argv: arrays of arguments
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

