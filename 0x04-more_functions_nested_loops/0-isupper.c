#include "main.h"
/**
 * _isupper - Checks for uppercase
 * @c: The character to be entered
 * main - Startinhg point
 * Return: 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
