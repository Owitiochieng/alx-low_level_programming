#include "main.h"
/**
 * _isupper - A function that detects uppercase letters
 * @c: The letter for detection
 * Return: 1 for true conditions and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
