#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a newline
 *
 *Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              followed by a newline character '\n'.
 *
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
