#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - A function that counts the number of unique nodes
 * in a looped linked list
 * @head: This points to the head of the listint_tfor checking
 * Return: 0 when list is not looped else number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *ha_re;
	size_t no_des = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tort = head->next;
	ha_re = (head->next)->next;
	while (ha_re)
	{
		if (tort == ha_re)
		{
			tort = head;
			while (tort != ha_re)
			{
				no_des++;
				tort = tort->next;
				ha_re = ha_re->next;
			}
			tort = tort->next;
			while (tort != ha_re)
			{
				no_des++;
				tort = tort->next;
			}
			return (no_des);
		}
		tort = tort->next;
		ha_re = (ha_re->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - This function safely prints a listint_t list
 * @head: This points to the head of the listint_t list
 * Return: Nodes inumber in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_des, g = 0;

	no_des = looped_listint_len(head);

	if (no_des == 0)
	{
		for (; head != NULL; no_des++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (g = 0; g < no_des; g++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (no_des);
}
