#include "main.h"

/**
 * print_numbers - This function that prints the numbers, from 0 to 9.
 *
 * Return: always 0 on success
 */

void print_numbers(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
