#include "main.h"
/**
 * _strlen - Prints string length
 * @s: The string
 * Return: String length
 */

int _strlen(char *s)
{
	int longl = 0;

	while (*s != '\0')
	{
		longl++;
		s++;
	}

	return (longl);
}
