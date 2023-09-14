#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - This function is meant to print strings.
 * The printed string is followed by a new line
 * @separator: An input of the string to be printed between strings
 * @n: An input of the number of strings passed to the function
 * @...: An input of variable number of strings to be printed
 * Description: Should the separator be NULL, it is not to be printed
 * If one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *g;
	unsigned int w;

	va_start(strs, n);

	for (w = 0; w < n; w++)
	{
		g = va_arg(strs, char *);
		if (g == NULL)
			printf("(nil)");
		else
			printf("%s", g);
		if (w != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
