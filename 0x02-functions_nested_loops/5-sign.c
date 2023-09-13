#include "main.h"

/**
 * print_sign - This function prints the sign of a number
 * @n: This is the number to be checked
 *
 * Return: 1 for positive number or -1 for negative number or 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
