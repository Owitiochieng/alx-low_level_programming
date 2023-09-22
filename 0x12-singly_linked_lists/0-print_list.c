#include "lists.h"
/**
 * print_listint - A function mant to print linked list elements
 * @h: An input of linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nu_mbr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nu_mbr++;
		h = h->next;
	}
	return (nu_mbr);
}
