#include "main.h"

/**
 * factorial - This is a function that returns the factorial of a number
 * @n: Number the factorial is returned from
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
