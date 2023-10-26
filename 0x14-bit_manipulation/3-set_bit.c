#include "main.h"

/**
 * set_bit - This functionmakes value of bit to be 1 at a particular position
 * @n: Tis input respresents the number to set
 * @index: This input represents position for bit setting
 * Return: 1 upon success otherwise -1 should there be an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_val;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit_val = 1 << index;
	*n = *n | bit_val;
	return (1);
}
