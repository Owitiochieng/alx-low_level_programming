#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Location of the memory for filling
 * @b: The value
 * @n: The number of bytes for change
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int g;

	for (g = 0; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}
