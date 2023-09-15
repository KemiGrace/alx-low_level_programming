#include "main.h"

/**
 * more_numbers - This program prints 10 times the numbers, from 0 to 14
 *
 * Return: void on success
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if  (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
