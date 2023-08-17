#include "main.h"
/**
 * print_square - For printing squares
 * @size: This is the square's size
 * Return: 0
 */
void print_square(int size)
{
	int c;
	int d;

	d = 0;
	if (size < 1)
		_putchar('\n');
	while (d < size)
	{
		c = 0;
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		d++;
	}
}
