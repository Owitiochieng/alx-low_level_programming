#include <stdio.h>
/**
 * main - Printing of all two digit combinations
 * Return: 0
 */

int main(void)
{
	int a = 1;

	while (a < 100)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar('\n');
		a++;
	}
	return (0);
}
