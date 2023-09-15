#include "main.h"

/**
 * print_line - This function draws a straight line in the terminal.
 * @n: This it the number of times the character is printed
 *
 * Return: Always 0 on success
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

