#include"main.h"
/**
 * get_bit - This function returns value of a bit at a particular position
 * @n: This input represents number from which bits will be checked
 * @index: Shows position where bit is to be checked
 * Return: The value of the bit, or -1 should there be an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, confirm;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	confirm = n & div;
	if (confirm == div)
		return (1);
	return (0);
}
