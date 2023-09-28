#include "main.h"
/**
 * get_endianness - A function for determining if a
 * machine is little or big endian
 * Return: 0 for big otherwise return 1 for little
 */
int get_endianness(void)
{
	unsigned int ind = 1;
	char *pointer_to_byte = (char *) &ind;

	return (*pointer_to_byte);
}
