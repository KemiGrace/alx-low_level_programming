#include "main.h"

/**
 * _isdigit - This program checks for a digit (0 through 9).
 * @c: This is the character we need to check
 *
 * Return: 1 if c is a digit character or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
