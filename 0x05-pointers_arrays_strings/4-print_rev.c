#include "main.h"
/**
 * print_rev - Prints a string in reverse followed in a new line
 * @s: The string
 */
void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	for (x--; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
