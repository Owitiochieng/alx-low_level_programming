#include "main.h"

/**
 * print_alphabet_x10 - Ten times lowercase printing of alphabets.
 * main - Check the code
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
