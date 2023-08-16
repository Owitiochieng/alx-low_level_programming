#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: An ASCII value
 * Return: 1 if greater than zero, 0 if zero, and -1 if less than zero
 */
int print_sign(int n)
{
	if (n >= 49 && n <= 57)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 48)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else if (n < 48)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	_putchar('\n');
	return (0);
}

