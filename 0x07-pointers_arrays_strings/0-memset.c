#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: the starting  address of the memory to be filled
 * @n: the number of bytes to be changed
 * @b: the constant byte
 *
 * Return: the changed array with the new n bytes value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
