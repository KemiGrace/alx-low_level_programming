#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              ten times, each followed by a newline character '\n'.
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

		_putchar('\n');
		n++;
	}
}
