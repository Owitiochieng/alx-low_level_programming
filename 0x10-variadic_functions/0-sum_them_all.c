#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This function is meant to returnsthe sum of all its paramters
 * @n: An input of all the number  of parameters passed to the function
 * @...:This is an input of variables used during sumation
 * Return: Result of sumation else 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list g;
	unsigned int w, sum = 0;

	va_start(g, n);
	for (w = 0; w < n; w++)
		sum += va_arg(g, int);
	va_end(g);
	return (sum);
}
