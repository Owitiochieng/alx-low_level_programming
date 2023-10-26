#include "main.h"
/**
 * flip_bits - This is a function that counts number of bits to change
 * to get from one number to another
 * @n: An input that represents first number
 * @m: An input that represents second number
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int posi, bit_num = 0;
	unsigned long int now;
	unsigned long int exclsive = n ^ m;

	for (posi = 63; posi >= 0; posi--)
	{
		now = exclsive >> posi;
		if (now & 1)
			bit_num++;
	}
	return (bit_num);
}
