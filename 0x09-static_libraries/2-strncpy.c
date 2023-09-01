#include "main.h"
/**
 * _strncpy - For copying a string
 * @dest: Value for input
 * @src: Value for input
 * @n: Value for input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int g = 0;

	while (g < n && src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}
	return (dest);
}
