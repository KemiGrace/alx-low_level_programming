#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: This is the string to be treated
 * Return:m
 *  return length on success
 */
int _strlen(char *s)
{
	int entire_length = 0;

	while (*s != '\0')
	{
		entire_length++;
		s++;
	}
	return (entire_length);
}
