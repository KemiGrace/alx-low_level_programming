#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: This is the function copies
 * @src: The bytes from the memory area
 * @dest: To the memory area
 *
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
