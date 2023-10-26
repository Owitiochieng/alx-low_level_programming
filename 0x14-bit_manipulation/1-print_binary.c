#include "main.h"
/**
 * _pawa - This function is for finding (base ^ power)
 * @b: This is an iput representing base of the exponent
 * @p: This is an input representing power of the exponent
 * Return: The result of (base ^ power)
 */
unsigned long int _pawa(unsigned int b, unsigned int p)
{
	unsigned long int val;
	unsigned int indx;

	val = 1;
	for (indx = 1; indx <= p; indx++)
		val *= b;
	return (val);
}

/**
 * print_binary - This function displays a num in binary form
 * @n:This input represents the number to display
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, confirm;
	char tracker;

	tracker = 0;
	div = _pawa(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		confirm = n & div;
		if (confirm == div)
		{
			tracker = 1;
			_putchar('1');
		}
		else if (tracker == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

