#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: input string
 * Return: print
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}