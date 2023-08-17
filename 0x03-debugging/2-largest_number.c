#include "main.h"

/**
 * largest_number - returns the largest number among three
 * @a: Integer 1
 * @b: Integer 2
 * @c: Integer 3
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
