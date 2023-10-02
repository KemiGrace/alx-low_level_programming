#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: The string to be found
 * @c: The character to be located
 *
 * Return: to the first occurrence of the character c if c is found
 * Return NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}

