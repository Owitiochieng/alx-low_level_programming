#include "main.h"
/**
 * _puts - A function that gives out a string to stdout
 * @str: The string that is to be printed
 * _putchar: For printing a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
