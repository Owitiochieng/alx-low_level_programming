#include <stdio.h>
/**
 * main - A program that prints all combinations of single digit numbers
 * Return: 0
 */

int main(void)
{
	int g;

	for (int g = 0; g < 10; i++)
	{
		putchar(g + '0');
		if (g < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
