#include "lists.h"
/**
 * free_listint2 - This function frees a linked list
 * @head: points to the linked list to be freed
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_n;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp_n = (*head)->next;
		free(*head);
		*head = tmp_n;
	}
	*head = NULL;
}
