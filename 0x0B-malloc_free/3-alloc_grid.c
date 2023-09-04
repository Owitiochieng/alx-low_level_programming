#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: The first integer input
 * @height: The second integer input
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int c;
	int n;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		matrix[c] = malloc(sizeof(int) * width);
		if (matrix[c] == NULL)
		{
			for (; c >= 0; c--)
				free(matrix[c]);
			free(matrix);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (n = 0; n < width; n++)
			matrix[c][n] = 0;
	}
	return (matrix);
}
