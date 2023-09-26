#include "lists.h"
/**
 * free_listint_safe - For freeing a linked list
 * @h: This points to the first node in the linked list
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t str_len = 0;
	int di_ff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		di_ff = *h - (*h)->next;
		if (di_ff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			str_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			str_len++;
			break;
		}
	}
	*h = NULL;
	return (str_len);
}
