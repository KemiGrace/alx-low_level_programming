#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: the array
 * @size: the size of the array
 * @action: this is the function to perform of each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
