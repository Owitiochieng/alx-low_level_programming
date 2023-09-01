#include "main.h"
/**
 * _islower - function that checks whether a character is lowercase or not
 * @c: the character for identification
 * Return: 1 if yes otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
