#include "lists.h"
/**
 * get_nodeint_at_index - This function returns the node at a certain
 * index in a linked list
 * @head: This is the first node in the linked list
 * @index: The index of the node that is to be returned
 * Return: Desired node otherwise return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g = 0;
	listint_t *tmp_n = head;

	while (tmp_n && g < index)
	{
		tmp_n = tmp_n->next;
		g++;
	}
	return (tmp_n ? tmp_n : NULL);
}
