#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @g: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int g, char **av)
{
	int b, d, r = 0, p = 0;
	char *string;

	if (g == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < g; b++)
	{
		for (d = 0; av[b][d]; d++)
			p++;
	}
	p += g;
	string = malloc(sizeof(char) * p + 1);
	if (string == NULL)
		return (NULL);
	for (b = 0; b < g; b++)
	{
		for (d = 0; av[b][d]; d++)
		{
			string[r] = av[b][d];
			r++;
		}
		if (string[r] == '\0')
		{
			string[r++] = '\n';
		}
	}
	return (string);
}
