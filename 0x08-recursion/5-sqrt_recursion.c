#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that returns natural square root of a number.
 * @n: Number used to calculate the square root
 *
 * Return: The square root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses for finding natural sqrt of a number
 * @n: Number used to calculate the square root
 * @i: This is the iterator
 *
 * Return: The result of the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
