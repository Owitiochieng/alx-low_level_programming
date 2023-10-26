#include "main.h"
/**
 * binary_to_uint - This is a function that turns binary num to an unsigned int
 * @b: This is an input address to a str with the binary number
 * Return: The converted number or 0 upon error
 */
unsigned int binary_to_uint(const char *b)
{
	int indx;
	unsigned int value;

	value = 0;
	if (!b)
		return (0);
	for (indx = 0; b[indx] != '\0'; indx++)
	{
		if (b[indx] != '0' && b[indx] != '1')
			return (0);
	}
	for (indx = 0; b[indx] != '\0'; indx++)
	{
		value <<= 1;
		if (b[indx] == '1')
			value += 1;
	}
	return (value);
}
