#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - natural square root of an inputted number
 * @num: square root of number to be found
 * @root: root to be tested
 * Return: square root if the number has a natural number
 * --1 if the number does not have an natural root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
