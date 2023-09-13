#include "main.h"

/**
 * _isalpha - This is to check for alphabetic character.
 * @c: This is the character to be checked
 *
 * Return: 1 if c is a letter  in lower or uppercase or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
