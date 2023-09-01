#include "main.h"
/**
 * _strlen - This function outputs string length
 * @s: string input
 * Return: length
 */
int _strlen(char *s)
{
	int leng_th = 0;

	while (*s != '\0')
	{
		leng_th++;
		s++;
	}
	return (leng_th);
}
