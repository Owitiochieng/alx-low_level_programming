#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts a new node in a linked
 * list, at a given position
 * @head: This points to the first node in the list
 * @idx: The position where the new node is added
 * @n: data for insertion in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *new_n;
	listint_t *t_mp = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n || !head)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	for (g = 0; t_mp && g < idx; g++)
	{
		if (g == idx - 1)
		{
			new_n->next = t_mp->next;
			t_mp->next = new_n;
			return (new_n);
		}
		else
			t_mp = t_mp->next;
	}
	return (NULL);
}
