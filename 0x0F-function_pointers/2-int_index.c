#include "function_pointers.h"
/**
 * int_index - This function is designed to look for an integer
 * @array: The array for input
 * @size: Represents the number of elements in the array
 * @cmp: pointer to function used in searching the integer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int g;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (g = 0; g < size; g++)
	{
		if (cmp(array[g]))
			return (g);
	}
	return (-1);
}
