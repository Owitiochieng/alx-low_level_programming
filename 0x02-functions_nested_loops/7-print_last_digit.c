#include "main.h"
/**
 * print_last_digit - This function prints the last digit
 * @k: The value from which a last digit will be printed
 * Return: The output from the program
 */
int print_last_digit(int k)
{
	int last_digit;
	
	last_digit = k % 10;
	if (k < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
