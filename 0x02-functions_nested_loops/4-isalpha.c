#include "main.h"
/**
 * _isalpha - Checks for alphabets
 * @c : An (ASCII) value for determining if an integer is an alpabet or not
 * Return: 1 for alpabets and 0 for non alphabets
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
