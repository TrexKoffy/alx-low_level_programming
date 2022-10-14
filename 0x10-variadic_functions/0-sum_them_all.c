#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This takes in unknown number
 * of arguments and sums them up.
 *
 * @n: va_list initializer
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum_values = 0, init_value;
	va_list values;


	if (n == 0)
		return (0);


	va_start(values, n);

	for (init_value = 0; init_value < n; init_value++)
	{
		sum_values += va_arg(values, int);
	}
	va_end(values);
	return (sum_values);
}
