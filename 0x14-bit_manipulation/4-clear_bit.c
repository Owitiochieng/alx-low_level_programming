#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - A function that makes value of a bit to be 0 at a given position
 * @n: This is the number to set
 * @index: This is the position to set a bit
 * Return: 1 upon success otherwise return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

