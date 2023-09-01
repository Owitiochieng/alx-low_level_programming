#include "main.h"
/**
 * _strcat - For concatenating two strings
 * @dest: The destination string
 * @src: The source string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int g, h;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[g] = src[h];
		g++;
		h++;
	}

	dest[g] = '\0';
	return (dest);
}
