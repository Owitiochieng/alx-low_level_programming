#include "main.h"
/**
 * _strchr - Point to start
 * @s: input
 * @c: input
 * Return: 0 at all times
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
