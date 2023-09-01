#include "main.h"
/**
 * _atoi - A function for changing string into an integer
 *
 * @s: the string itself
 *
 * Return: The resulting integer
 */
int _atoi(char *s)
{
	int sign_ = 1;
	int g = 0;
	unsigned int result = 0;

	while (!(s[g] <= '9' && s[g] >= '0') && s[g] != '\0')
	{
		if (s[g] == '-')
			sign_ *= -1;
		g++;
	}
	while (s[g] <= '9' && (s[g] >= '0' && s[g] != '\0'))
	{
		result = (result * 10) + (s[g] - '0');
		g++;
	}
	result *= sign_;
	return (result);
}
