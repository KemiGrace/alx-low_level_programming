#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialize with a specific char
 * @size: array size
 * @c: character to be assigned
 *
 * Return: a pointer to the array, NULL if size is 0 or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);

}
