#include "main.h"

/**
 * print_last_digit - Program to print the last digit of a number
 * @n: This is the number to be computed
 *
 * Return: value of the last digit of a number
 */

int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;
	if (lastD < 0)
	{
		lastD = lastD * -1;
	}

	_putchar(lastD + '0');
	return (lastD);
}
