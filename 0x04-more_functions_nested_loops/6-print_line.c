#include "main.h"

/**
 * print_line - For drawing a straight line
 * @n: An integer that shows how many times the line is drawn
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
