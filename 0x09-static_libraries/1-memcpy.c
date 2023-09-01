#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: Bytes from memory area
 * @src: To memory area
 * @n: Number of bytes to be copied
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int u = 0;

	while (u < n)
	{
		dest[u] = src[u];
		u++;
	}
	return (dest);
}
