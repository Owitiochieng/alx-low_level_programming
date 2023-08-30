#include "main.h"

int confirm_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks for palindromes from a string
 * @s:The string
 * Return: 1 if yes and 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (confirm_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - For returning string's length
 * @s: The string
 * Return: String's length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * confirm_pal - Recursively looks for palindrome
 * @s: The string
 * @i: The iterator
 * @len: String's length
 * Return: 1 if yes and 0 if not
 */
int confirm_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (confirm_pal(s, i + 1, len - 1));
}

