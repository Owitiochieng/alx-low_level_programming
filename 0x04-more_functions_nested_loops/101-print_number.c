#include "main.h"
/**
 * print_number - For printing integers
 * @n: An integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int g = n;

	if (n < 0)
	{
		_putchar(45);
		g = -g;
	}
	if (g / 10)
	{
		print_number(g / 10);
	}
		_putchar(g % 10 + '0');
}
