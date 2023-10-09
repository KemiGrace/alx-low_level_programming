#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - This is a function that allocates memory using malloc
 * @b: this is the number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
