#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: The string to be searched
 * @accept: This is the set of bytes we need to find
 *
 * Return: A pointer to the matched byte if a set is matched
 * Set is matched NULL otherwise.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
