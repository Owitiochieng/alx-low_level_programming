#include "main.h"
/**
 * _isalpha - Looks for an alphabet from an input character
 * @c: the character for checking
 * Return: 1 if yes and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
