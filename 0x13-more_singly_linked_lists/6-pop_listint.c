#include "lists.h"
/**
 * pop_listint - This is a function that deletes the head
 * node of a linked list
 * @head: This input points to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * otherwise 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_n;
	int g;

	if (!head || !*head)
		return (0);
	g = (*head)->n;
	tmp_n = (*head)->next;
	free(*head);
	*head = tmp_n;
	return (g);
}
