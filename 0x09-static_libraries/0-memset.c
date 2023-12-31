#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Location of the memory for filling
 * @b: The value
 * @n: The number of bytes for change
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}
	return (s);
}
