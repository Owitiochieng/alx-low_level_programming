#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: The lowest integer input
 * @max: The highest integer input
 * Return: A pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *g;
	int si_ze;
	int m;

	if (max < min)
		return (NULL);
	si_ze = max - min + 1;
	g = malloc(sizeof(int) * si_ze);
	if (g == NULL)
		return (NULL);
	for (m = 0; min <= max; m++)
		g[m] = min++;
	return (g);
}
