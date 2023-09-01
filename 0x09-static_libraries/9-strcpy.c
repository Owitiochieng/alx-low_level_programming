#include "main.h"
/**
 *_strcpy - a program that copies strings
 * @dest: locatio for copying to
 * @src: location for getting the string
 * Return: value of string
 */
char *_strcpy(char *dest, char *src)
{
	int g = 0;
	int h = 0;

	while (*(src + g) != '\0')
	{
		g++;
	}
	for ( ; h < g ; h++)
	{
		dest[h] = src[h];
	}
	dest[g] = '\0';
	return (dest);
}
