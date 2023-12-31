#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: This program prints the numbers from 1 to 100.
 * Print Fizz for multiple of 3, print Buzz for multiple of 5
 * Print FizzBuzz for numbers that are multiple of both 3 and 5
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
