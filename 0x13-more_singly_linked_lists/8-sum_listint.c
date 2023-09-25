#include "lists.h"
/**
 * sum_listint - This function adds  all the data in a listint_t list
 * @head: This is the first node in the linked list
 * Return: The calculated sum
 */
int sum_listint(listint_t *head)
{
	int su_mm = 0;
	listint_t *tmp_n = head;

	while (tmp_n)
	{
		su_mm += tmp_n->n;
		tmp_n = tmp_n->next;
	}
	return (su_mm);
}
