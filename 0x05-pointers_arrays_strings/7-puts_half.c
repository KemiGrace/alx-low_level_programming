#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: the string input
 * Return: return void on success
 */
void puts_half(char *str)
{
	int length = 0;
	int half, j;

	while (str[length] != '\0')
	{
		length++;
	}
	half = (length - 1) / 2;
	for (j = (half + 1); j < length; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
