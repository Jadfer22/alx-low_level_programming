#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguements it recieves
 * @argc: counts of arguments
 * @argv: arrays of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
