#include <stdio.h>
/**
 * main - A program that prints alphabets in reverse
 * Return: 0
 */

int main(void)
{
	char p;

	for (p = 'z' ; p >= 'a' ; p--)
		putchar(p);

	putchar('\n');
	return (0);
}
