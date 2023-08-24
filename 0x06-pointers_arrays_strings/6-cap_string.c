#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: String
 * Return: Pointer to a string
 */
char *cap_string(char *str)
{
	int separators = 0;

	while (str[separators])
	{
		while (!(str[separators] >= 'a' && str[separators] <= 'z'))
		{
			separators++;
		}
		if (str[separators - 1] == ' ' ||
				str[separators - 1] == '\t' ||
				str[separators - 1] == '\n' ||
				str[separators - 1] == ',' ||
				str[separators - 1] == ';' ||
				str[separators - 1] == '.' ||
				str[separators - 1] == '!' ||
				str[separators - 1] == '?' ||
				str[separators - 1] == '=' ||
				str[separators - 1] == '(' ||
				str[separators - 1] == ')' ||
				str[separators - 1] == '{' ||
				str[separators - 1] == '}' ||
				separators == 0)
		{
			str[separators] -= 32;
		}

		separators++;
	}
	return (str);
}
