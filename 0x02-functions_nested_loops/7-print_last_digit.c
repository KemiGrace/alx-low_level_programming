#include "main.h"

/**
 * print_last_digit - program that prints the last digit of a number.
 * @n: This is the number to be treated
 *
 * Return: The value of the last digit of number
 */

int print_last_digit(int n)
{
	int lastnum;

	lastnum = n % 10;
	if (lastnum < 0)
	{
		lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');
	return (lastnum);
}
