#include <stdio.h>

/**
 * main - main function to print all single digit of base 10
 *
 * Return: Mostly 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
