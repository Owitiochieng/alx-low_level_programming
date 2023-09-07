#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - A function for joining two strings
 * @s1: The first string input
 * @s2: The second string input
 * @n: The number of characters for joining from s2
 * Return: Pointer to the newly allocated space in memory else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *g;
	unsigned int size1 = 0, size2 = 0, m = 0, i;

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	if (n >= size2)
		g = (char *)malloc(size1 + size2 + 1);
	else
		g = (char *)malloc(size1 + n + 1);
	if (g == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		g[i] = s1[i];
	while (m < n && s2[m] != '\0')
	{
		g[i] = s2[m];
		i++;
		m++;
	}
	g[i] = '\0';
	return (g);
}
