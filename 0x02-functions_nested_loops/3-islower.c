#include "main.h"
/**
 * _islower - Used to print lowercase characters
 * main - This program prints lowercase characters
 * @c: The character to be checked (ASCII value)
 * Return: 1 while the character is of lowercase and (0) if uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
