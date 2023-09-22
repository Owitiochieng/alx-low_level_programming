#include <stdlib.h>
#include "lists.h"
/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: An input pointer to the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t g = 0;

	while (h)
	{
		g++;
		h = h->next;
	}
	return (g);
}
