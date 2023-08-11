#include <stdio.h>
/**
 * main - A program that prints all base ten single digits
 * Return: 0
 */

int main(void)
{
	int w;

	w = 0;
	while (w < 10)
	{
		putchar(w + '0');
		w++;
	}

	putchar('\n');
	return (0);
}
