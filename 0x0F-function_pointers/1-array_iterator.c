#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - This function processes other functions entered as elements
 * @array: An input of array
 * @size: how many elements that are to be printed
 * @action: points to a function we want to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int g;

	if (array == NULL || action == NULL)
		return;

	for (g = 0; g < size; g++)
	{
		action(array[g]);
	}
}
