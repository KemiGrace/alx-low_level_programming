#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: this is the separators between strings
 * @n: this is the number of the parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;

	va_list arg;

	va_start(arg, n);

	for (y = 0; y < n; y++)
	{
		char *x == va_arg(arg, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
	}
	printf("\n");
	va_end(arg);
}
