#include "main.h"
/**
 * binary_to_uint - A function for transforming a binary string to an
 * unsigned integer
 * @b: The input binary string for conversion
 * Return: The converted unsigned integer otherwise 0 while b is either
 * NULLL or has more than one character with 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int ind; /* Index for iterating through the binary string */
	unsigned int deci_val = 0; /* Final decimal value*/

	if (!b) /* Check if the input binary string is NULL */
		return (0);

	for (ind = 0; b[ind]; ind++) /* Iterating through each character in b */
	{
		if (b[ind] < '0' || b[ind] > '1') /* Checking for non valid binary digits */
			return (0);
		deci_val = 2 * deci_val + (b[ind] - '0'); /* Converting binary to decimal */
	}
	return (deci_val);
}
