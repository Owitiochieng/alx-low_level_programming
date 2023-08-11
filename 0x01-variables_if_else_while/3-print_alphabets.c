#include <stdio.h>
/**
 * main - Printing of both lower and upper case alphabets
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z')
		putchar(i);
	for (i = 'A' ; i <= 'Z')
		putchar(i);
	putchar('\n');
	return (0);
}
