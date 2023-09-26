#include "lists.h"
/**
 * delete_nodeint_at_index - This function deletes a node in a linked
 * list at a certain index
 * @head: This input points to the first element in the list
 * @index: The index input intended for the node for deletion
 * Return: 1 upon success otherwise -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_n = *head;
	listint_t *cur_ren = NULL;
	unsigned int g = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp_n);
		return (1);
	}
	while (g < index - 1)
	{
		if (!tmp_n || !(tmp_n->next))
			return (-1);
		tmp_n = tmp_n->next;
		g++;
	}
	cur_ren = tmp_n->next;
	tmp_n->next = cur_ren->next;
	free(cur_ren);
	return (1);
}
