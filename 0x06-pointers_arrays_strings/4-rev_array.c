#include "main.h"

/**
 * reverse_array - function to reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
