#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte
 * @s: the area of the memory to be filled
 * @b: the char to copy
 * @n: this is the number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: each element's sizes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb)
		if (pointer == NULL)
			return (NULL);
	_memset(pointer, 0, nmemb * size);
	return (pointer);
}
