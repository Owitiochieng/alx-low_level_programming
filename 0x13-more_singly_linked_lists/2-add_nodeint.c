#include "lists.h"
/**
 * add_nodeint - This function adds a new node at the beginning of a
 * linked list
 * @head: This input points to the first node in the list
 * @n: This is an input for inserting in the new node
 * Return: pointer to the new node otherwise return NULL upon failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
