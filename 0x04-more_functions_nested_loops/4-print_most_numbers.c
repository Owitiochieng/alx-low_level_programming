#include "main.h"
/**
 * print_most_numbers - Selectively prints numbers from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
