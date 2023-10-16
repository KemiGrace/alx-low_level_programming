#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: required string needed to be printed between numbers
 * @n: this is the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list arg;

	va_start(arg, n);
	for (y = 0; y < n; y++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	putchar('\n');
	va_end(arg);
}
