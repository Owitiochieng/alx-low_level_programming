#include "lists.h"
/**
 * reverse_listint - A function meant to reverse a linked list
 * @head: This points to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *latter = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = latter;
		latter = *head;
		*head = next;
	}
	*head = latter;
	return (*head);
}
