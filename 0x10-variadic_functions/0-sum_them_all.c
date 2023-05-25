#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - functions that returns the sum
 * of all its paramters
 * @n: The number of paramters passed
 * @...: A variable number of paramters
 * Return: If n == 0 - 0, Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list no;
	unsigned int i, sum = 0;

	va_start(no, n);
	for (i = 0; i < n; i++)
		sum += va_arg(no, int);
	va_end(no);
	return (sum);
}
