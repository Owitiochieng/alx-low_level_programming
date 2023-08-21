#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: String value
 */

void _puts(char *str)
{
	int x;

	for (x  = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
