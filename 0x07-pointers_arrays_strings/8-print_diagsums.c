#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: The matrix
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int g;
	int sum_one = 0;
	int sum_two = 0;

	for (g = 0; g < size; g++)
	{
		sum_one += a[g];
		a += size;
	}
	a -= size;

	for (g = 0; g < size; g++)
	{
		sum_two += a[g];
		a -= size;
	}
	printf("%d, %d\n", sum_one, sum_two);
}
