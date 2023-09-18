#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: This is the first interger to swap
 * @b: This is the second integer to swap
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
