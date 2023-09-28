#include "main.h"
/**
 * set_bit - A function for setting a specific bit at a given index
 * to 1 in a number
 * @n: A pointer input to the number for  modification
 * @index: Index input of the bit to set to 1 (0-based)
 * Return: 1 on success, otherwise  -1 on if bitIndex is out of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

