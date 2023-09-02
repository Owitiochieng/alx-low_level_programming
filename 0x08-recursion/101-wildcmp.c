#include "main.h"
/**
 * wildcmp - A program meant for comparison of two strings
 * @s1: Pointer to the string itself
 * @s2: Pointer to the string itself
 * Return: 0 if not identical else 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '0')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
		else if (*s2 == *s1)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		return (0);
}
