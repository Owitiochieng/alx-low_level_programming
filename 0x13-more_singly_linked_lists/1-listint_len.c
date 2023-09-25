#include "lists.h"
/**
 * listint_len - This is a function that returns the number
 * of elements in a linked lists
 * @h: This input points to the head of the linked list
 * of type listint_t to traverse
 * Return: This represents the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
