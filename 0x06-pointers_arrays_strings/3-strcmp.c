#include "main.h"
/**
 * _strcmp - For comparing two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int g = 0;

	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
		g++;
	}
	return (0);
}
