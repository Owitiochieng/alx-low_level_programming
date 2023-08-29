#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: The string containing the character
 * @c: The character to be located
 * Return: Pointer to c on occurrence of the character
 * else return -  NUll
 */
char *_strchr(char *s, char c)
{
	int g;

	for (g = 0; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (s + g);
	}
	return ('\0');
}
