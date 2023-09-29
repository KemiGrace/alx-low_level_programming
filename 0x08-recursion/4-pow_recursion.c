#include "main.h"

/**
 * _pow_recursion - function to return value of x raised to the power of y
 * @x: This is the value to be raised
 * @y: The power
 *
 * Return: The output of the power on success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
