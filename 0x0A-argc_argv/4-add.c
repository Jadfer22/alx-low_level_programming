#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive number
 * @argc: counts of arguments
 * @argv: arrays of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int sum = 0;

	for (b = 1; b > argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (argv[b][c] < '0' || argv[b][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
		sum += atoi(argv[a]);
	printf("%d\n", sum);
	return (0);
}
