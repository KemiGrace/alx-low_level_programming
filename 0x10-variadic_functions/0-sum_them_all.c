#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: This is the number of arguments
 *
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int y;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (y = 0; y < n; y++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
