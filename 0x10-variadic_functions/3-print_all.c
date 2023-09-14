#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - This function is meant to print anything
 * @format: An input list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int s = 0;
	char *u, *v = "";
	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[s])
		{
			switch (format[s])
			{
				case 'c':
					printf("%s%c", v, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", v, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", v, va_arg(l, double));
					break;
				case 's':
					u = va_arg(l, char *);
					if (!u)
						u = "(nil)";
					printf("%s%s", v, u);
					break;
				default:
					s++;
					continue;
			}
			v = ", ";
			s++;
		}
	}
	printf("\n");
	va_end(l);
}
