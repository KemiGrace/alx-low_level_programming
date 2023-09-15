#include "main.h"

/**
 * print_square - This function prints a square, followed by a new line.
 * @size: This is the size of the square
 *
 * Return: Void on success
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
