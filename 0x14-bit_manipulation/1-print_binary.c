#include "main.h"
/**
 * print_binary - This function converts binary to its decimal number
 * @num: The input decimal number
 * Return: Void
 */
void print_binary(unsigned long int num)
{
	int bit, one_count = 0; /* bit position and one_count for printed 1s */
	unsigned long int curren_bitval;

	for (bit = 63; bit >= 0; bit--)
	{
		curren_bitval = num >> bit; /* For turning the number to the right */
		if (curren_bitval & 1)
		{
			_putchar('1');
			one_count++;
		}
		else if (one_count) /* Printing of '0' should there be at least one '1' */
		{
			_putchar('0');
		}
	}
	if (!one_count) /* Printing of '0' whilst no 1s was printed */
		_putchar('0');
}
