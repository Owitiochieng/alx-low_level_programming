#include "main.h"
/**
 * swap_int - For swapping values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
