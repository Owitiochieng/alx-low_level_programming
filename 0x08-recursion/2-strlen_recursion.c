#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int length_string = 0;

	if (*s)
	{
		length_string++;
		length_string += _strlen_recursion(s + 1);
	}
	return (length_string);
}
