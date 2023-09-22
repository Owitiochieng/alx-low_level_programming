#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - A function that adds a new node at the end of a linked list
 * @head: An input of double pointer to the list_t list
 * @str: A string input to put in the new node
 * Return: address of the new element otherwse NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *g;
	list_t *h = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	g = malloc(sizeof(list_t));
	if (!g)
		return (NULL);
	g->str = strdup(str);
	g->len = len;
	g->next = NULL;

	if (*head == NULL)
	{
		*head = g;
		return (g);
	}
	while (h->next)
		h = h->next;
	h->next = g;
	return (g);
}
