#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: this is the separators between strings
 * @n: this is the number of the parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
