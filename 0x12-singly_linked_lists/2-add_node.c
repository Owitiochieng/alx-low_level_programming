#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - This is a function that adds a new node
 * at the start of a linked list
 * @head: An input of double pointer to the linked list
 * @str: An input of a new string to add in the node
 * Return: the address of the new element, otherwise return NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *g;
	unsigned int len = 0;

	while (str[len])
		len++;
	g = malloc(sizeof(list_t));
	if (!g)
		return (NULL);

	g->str = strdup(str);
	g->len = len;
	g->next = (*head);
	(*head) = g;
	return (*head);
}
