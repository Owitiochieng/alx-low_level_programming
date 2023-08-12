#include <stdio.h>
/**
 * main - A program that computes single digits with commas
 * Return: 0
 */

int main(void)
{
	int g = 0;

	do {
		putchar(g + '0');
		if (g < 9)
		{
			putchar(',');
			putchar(' ');
		}
		g++;
	} while (g < 10);

	putchar('\n');
	return (0);
}
