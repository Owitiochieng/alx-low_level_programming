#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: String to be searched
 * @needle: The substring for location
 * Return: A pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int g;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		g = 0;
		if (haystack[g] == needle[g])
		{
			do {
				if (needle[g + 1] == '\0')
					return (haystack);
				g++;
			} while (haystack[g] == needle[g]);
		}
	}
	return (haystack);
}
