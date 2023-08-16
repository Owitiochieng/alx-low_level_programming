#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers up to ninety eight
 * @n: The first integer passed to the function
 * Return: void (no need to return a value)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}

