#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0 on success
 */
void rev_string(char *n)
{
	int k = 0;
	int m = 0;
	char temp;

	while (*(n + k) != '\0')
	{
		k++;
	}
	k--;
	for (m = 0; m < k; m++, k--)
	{
		temp = *(n + m);
		*(n + m) = *(n + k);
		*(n + k) = temp;
	}
}

/**
 * infinite_add - This is a function that adds two numbers
 * @n1: This represent the 1st number to add
 * @n2: This represent the 2nd number to add
 * @r: the pointer to buffer
 * @size_r: the buffer size
 *
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, x = 0, y = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || overflow == 1)
	{
		if (x < 0)
			val1 = 0;
		else
			val1 = *(n1 + x) - '0';
		if (y < 0)
			val2 = 0;
		else
			val2 = *(n2 + y) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		y--;
		x--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
