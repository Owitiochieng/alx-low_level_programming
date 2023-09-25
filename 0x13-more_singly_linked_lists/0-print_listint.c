#include "lists.h"
/**
 * print_listint - This is a function meant for printing
 * all the elements of a linked list
 * @h: A linked list input of type listint_t to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t g = 0;

	while (h)
	{
		printf("%d\n", h->n);
		g++;
		h = h->next;
	}
	return (g);
}
