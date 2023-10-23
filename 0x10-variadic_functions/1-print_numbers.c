#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: required string needed to be printed between numbers
 * @n: this is the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y, arr;
	va_list ptr;

	va_start(ptr, n);

	for (y = 0; y < n; y++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ptr);
}
