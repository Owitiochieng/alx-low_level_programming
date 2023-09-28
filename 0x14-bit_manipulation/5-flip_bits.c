#include "main.h"
/**
 * flip_bits - A function that counts the number of non similar
 * bits between two n and m
 * @n: Input number one
 * @m: Input number two
 * Return: The number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ind, co_unt = 0;
	unsigned long int cur_ren;
	unsigned long int diff = n ^ m;

	for (ind = 63; ind >= 0; ind--)
	{
		cur_ren = diff >> ind;
		if (cur_ren & 1)
			co_unt++;
	}
	return (co_unt);
}
