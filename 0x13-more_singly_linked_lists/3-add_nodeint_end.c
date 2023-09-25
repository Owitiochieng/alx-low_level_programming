#include "lists.h"
/**
 * add_nodeint_end - This function adds a node at the end of a linked list
 * @head: A pointer input to the first element in the list
 * @n: An input for insertion in the new element
 * Return: pointer to the new node otherwise NULL upon failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *tmp = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_n;
	return (new_n);
}
