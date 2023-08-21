#include "main.h"
/**
 * *_strcpy - Points to the character
 *  @dest: First string pointing to a character
 *  @src: Second string that points to the character
 *  Return: The (dest) character
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
