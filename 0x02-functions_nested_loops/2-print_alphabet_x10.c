#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet.
 *
 *
 * Return: no value
 */
void print_alphabet_x10(void)
{
	char m;
	int n;

	n = 0;

	while (n < 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
	n++;
}
