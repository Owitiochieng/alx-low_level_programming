#include "main.h"
#include <stdio.h>
/**
 * main - Is a program that prints numbers from 0 to 100
 * Fizz replaces  multiples of 3
 * Buzz replaces multiples of 5
 * Fizzbuzz replaces multipless of both 3 and 5
 * Return: 0
 */

int main(void)
{
	int g;

	for (g = 1; g <= 100; g++)
	{
		if ((g % 3) == 0 && (g % 5) == 0)
			printf("FizzBuzz");

		else if ((g % 3) == 0)
			printf("Fizz");

		else if ((g % 5) == 0)
			printf("Buzz");

		else
			printf("%d", g);

		if (g == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
