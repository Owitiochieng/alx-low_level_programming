#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function for creating an array of characters
 * It then initializes it with a specific character
 * @size: The size of the array of characters
 * @c: The character input
 * Return: A pointer to array on success otherwise return 0 if size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *g;
	unsigned int h;

	g = malloc(sizeof(*g) * size);
	if (size == 0 || g == NULL)
		return (NULL);

	for (h = 0; h < size; h++)
		g[h] = c;
	return (g);
}
