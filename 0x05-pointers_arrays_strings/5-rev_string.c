#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	int length;
	int l;
	char m;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (l = 0; l < length / 2; l++)
	{
		m = s[l];
		s[l] = s[length - l - 1];
		s[length - l - 1] = m;
	}
}

