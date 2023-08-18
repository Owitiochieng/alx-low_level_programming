#include <stdio.h>

/**
 * main - This program is for printing the largest prime factor
 * of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long divi_sor;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (divi_sor = 3; divi_sor <= n; divi_sor += 2)
	{
		while (n % divi_sor == 0)
		{
			n /= divi_sor;
		}
	}
	printf("%ld\n", n);
	return (0);
}
