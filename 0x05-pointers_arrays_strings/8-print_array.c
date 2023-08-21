#include "main.h"
/**
 * print_array - Prints n elements of an array
 * @a: Array of integers
 * @n: Number of elements in the array
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);

		if (l != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
