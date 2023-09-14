#include "main.h"

/**
 * _isupper - This is a program that checks for uppercase character
 * @c: This is the character to be checked
 *
 * Return: 1 if c is uppercase character or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
