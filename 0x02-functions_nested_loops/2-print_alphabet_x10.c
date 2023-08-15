#include "main.h"
/*
 * print_alphabet_x10 - Ten times lowercase printing of alphabets
 * main - This program prints all the alphabets in lowercase ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 10; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
