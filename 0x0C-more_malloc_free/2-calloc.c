#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Function for allocatng memory and assigning a pointer
 * to the allocated memory
 * @nmemb: This is an input of the number of elements
 * @size: An input of the number of bytes for the array
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *g;

	if (nmemb == 0 || size == 0)
		return (NULL);
	g = calloc(nmemb, size);
	if (g == NULL)
		return (NULL);
	else
		return (g);
}
