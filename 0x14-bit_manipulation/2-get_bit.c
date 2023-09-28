#include "main.h"
/**
 * get_bit - A function that returns the value of a bit at a specified index
 * in a decimal number
 * @decimalNumber: The decimal number input for searching
 * @bitIndex: The index input of the bit to retrieve
 * Return: The value of the bit at the specified index (0 or 1), or -1 should
 * the index is out of range
 */
int get_bit(unsigned long int decimalNumber, unsigned int bitIndex)
{
	int bit_val;

	if (bitIndex > 63)
	{
		return (-1);
	}
	bit_val = (decimalNumber >> bitIndex) & 1;
	return (bit_val);
}
