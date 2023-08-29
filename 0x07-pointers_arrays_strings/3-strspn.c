#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: The string
 * @accept: The prefix for measurement
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				bytes++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (bytes);
		}
		s++;
	}
}
