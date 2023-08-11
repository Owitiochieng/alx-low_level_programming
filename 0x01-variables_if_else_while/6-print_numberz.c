#include <stdio.h>
/**
 * main - A program that prints all base ten single digits
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar("%c", i);

	putchar("\n");
	return (0);
}
