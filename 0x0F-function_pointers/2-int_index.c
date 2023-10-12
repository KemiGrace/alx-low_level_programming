#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: this is the array to search from
 * @size: size of the array
 * @cmp: the function pointer
 * Return: the index of the matched character or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
				return (x);
	}
	return (-1);
}
