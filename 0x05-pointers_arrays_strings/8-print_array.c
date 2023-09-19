#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers.
 * @a: This is the array name
 * @n: This is the number of elements of the array to be printed
 * Return: return the a and n input
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d.", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
