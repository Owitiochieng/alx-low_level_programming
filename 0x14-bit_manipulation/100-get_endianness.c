#include "main.h"
/**
 * get_endianness - This function checks the endianness
 * Return: 0 for a big endian and 1 for a small endian
 */
int get_endianness(void)
{
	int g;
	char *w;

	g = 1;
	w = (char *)&g;
	return (*w);
}
