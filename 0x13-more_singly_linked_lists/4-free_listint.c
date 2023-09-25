#include "lists.h"
/**
 * free_listint - A function meant to freesa linked list
 * @head: The linked list for freeing
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_n;

	while (head)
	{
		tmp_n = head->next;
		free(head);
		head = tmp_n;
	}
}
