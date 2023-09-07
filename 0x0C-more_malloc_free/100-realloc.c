#include <stdlib.h>
#include "main.h"
/**
 * _realloc - For reallocating memory into a new space
 * @ptr: The pointer to original memory
 * @old_size: Memory zise of previous allocation
 * @new_size: Memory alllocation of new allocation
 * Return: Pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new, *neew;
	unsigned int g;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr_new = malloc(new_size);
	if (!ptr_new)
		return (NULL);
	neew = ptr;
	if (new_size < old_size)
	{
		for (g = 0; g < new_size; g++)
			ptr_new[g] = neew[g];
	}
	if (new_size > old_size)
	{
		for (g = 0; g < old_size; g++)
			ptr_new[g] = neew[g];
	}
	free(ptr);
	return (ptr_new);
}
