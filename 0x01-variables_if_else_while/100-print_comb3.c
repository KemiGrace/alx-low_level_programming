#include <stdio.h>

/**
 * main - printing all possible different combinations of two digits
 *
 * Return: Mostly 0 on success
 */

int main(void)
{
	int a;
	int b;

	for  (a = 0; a  <= 9; a++)
	{
		for  (b = a + 1; b  <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (!(a == 8 && b == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
