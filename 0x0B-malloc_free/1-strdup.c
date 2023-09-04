#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string to a new memory space location
 * @str: character input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *g;
	int q;
	int p = 0;

	if (str == NULL)
		return (NULL);
	q = 0;
	while (str[q] != '\0')
		q++;
	g = malloc(sizeof(char) * (q + 1));
	if (g == NULL)
		return (NULL);
	for (p = 0; str[p]; p++)
		g[p] = str[p];
	return (g);
}
