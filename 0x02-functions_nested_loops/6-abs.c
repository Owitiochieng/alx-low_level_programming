#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @g: The integer for which to compute the absolute value
 * Return: The absolute value of the integer
 */
int _abs(int g)
{
	if (g < 0)
	{
		int absolute_value;
		
		absolute_value = g * -1;
		return (absolute_value);
	}
	return (g);
}

