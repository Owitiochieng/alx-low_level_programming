#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: An integer to be checked
 * Return: 1 if a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
