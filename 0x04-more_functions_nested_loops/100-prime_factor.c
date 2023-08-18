#include "main.h"
#include <stdio.h>

/**
 * main - This program is for printing the largest prime factor
 * of the number 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long int g, num = 612852475143;

	for (g = 3; g < 782849; g = g + 2)
	{
		while ((num % g == 0) && (num != 1))
			num = num / g;
	}
	printf("%lu\n", num);
	return (0);
}
