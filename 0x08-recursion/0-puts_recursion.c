#include "main.h"

/**
 * _puts_recursion - This is a function that prints a string plus a new line
 * @s: This is the input
 *
 * Return: Always 0 on success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
