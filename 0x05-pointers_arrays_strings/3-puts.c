#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: String
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		putchar(*str++);
	}
	putchar('\n');
}
