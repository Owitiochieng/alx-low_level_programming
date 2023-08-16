#include "main.h"

/**
 * print_last_digit - This function prints the last digit
 * @k: The value from which a last digit will be printed
 * Return: The last digit of the input value
 */
int print_last_digit(int k)
{
	int l;

	if (k < 0)
	{
		l = -k % 10;
	}
	else
	{
		l = k % 10;
	}
	_putchar(l + '0');
	return (l);
}
