#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function for sequentially joining two strings
 * @s1: First input for joining
 * @s2: Second input fot joining
 * Return: Result of concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *g;
	int x;
	int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = z = 0;
	while (s1[x] != '\0')
		x++;

	while (s2[z] != '\0')
		z++;
	g = malloc(sizeof(char) * (x + z + 1));
	if (g == NULL)
		return (NULL);
	x = z = 0;
	while (s1[x] != '\0')
	{
		g[x] = s1[x];
		x++;
	}
	while (s2[z] != '\0')
	{
		g[x+z] = s2[z];
		z++;
	}
	g[x+z] = '\0';
	return (g);
}
