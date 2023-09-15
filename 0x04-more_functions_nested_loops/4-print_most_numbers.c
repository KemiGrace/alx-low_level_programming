#include "main.h"

/**
 * print_most_numbers - This function  prints the numbers, 01356789
 *
 * Return: It return void on success
 */

void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (!(x == '2' || x == '4'))
			_putchar(x);
	}
	_putchar('\n');
}
