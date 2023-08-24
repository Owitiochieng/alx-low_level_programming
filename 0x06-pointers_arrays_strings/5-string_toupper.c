#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: String
 * Return: n
 */

char *string_toupper(char *n)
{
	int g = 0;

	while (n[g] != '\0')
	{
		if (n[g] >= 'a' && n[g] <= 'z')
			n[g] = n[g] - n[g] - 32;
		g++;
	}
	return (n);
}
