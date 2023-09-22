#include <stdlib.h>
#include "lists.h"
/**
 * free_list - A function meant to free a linked list
 * @head: An input of a linked list to be freed
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp_value;

	while (head)
	{
		temp_value = head->next;
		free(head->str);
		free(head);
		head = temp_value;
	}
}
