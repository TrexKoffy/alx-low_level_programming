#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - This prints out a string,
 * followed by the separator provided
 *
 * @separator: This is the delimiter
 * @n: number of strings to print
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list values;

	va_start(values, n);

	for (; i < n; i++)
	{
		char *all  = va_arg(values, char*);

		if (!all)
			all = "(nil)";
		printf("%s", all);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(values);
}
