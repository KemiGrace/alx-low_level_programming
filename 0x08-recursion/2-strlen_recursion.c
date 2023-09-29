#include "main.h"

/**
 * _strlen_recursion - This is a function that returns length of a string
 * @s: This is the string to be measeured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
