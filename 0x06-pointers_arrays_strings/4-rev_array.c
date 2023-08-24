#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array input
 * @n: Number of elements of the array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
