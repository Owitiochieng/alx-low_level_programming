#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s of any of the
 * bytes in the string accept
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
				return (s);
		}
		s++;
	}
	return ('\0');
}
