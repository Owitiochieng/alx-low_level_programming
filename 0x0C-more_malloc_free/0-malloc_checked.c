#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function for memory allocation
 * @b: The number of bytes that will be allocated
 * Return: A pointer to the allocated memory or exit with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);
	if (g == NULL)
	{
		exit(98);
	}
	return (g);
}
