#include <stdio.h>
#include "lists.h"
/**
 * print_list - This is a function that prints linked list elements
 * @h: An input pointer to the list_t list
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t g = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		g++;
	}
	return (g);
}
