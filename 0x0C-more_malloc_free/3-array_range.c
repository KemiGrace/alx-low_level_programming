#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: This is the minimum range of the stored valued.
 * @max: this is the maximum range of stored values and number element
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int x, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pointer[x] = min++;

	return (pointer);
}
