#include "main.h"
/**
 * print_diagonal - For drawing a diagonal line
 * @n: An integer indicating number of times the character is printed
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;
		int l;

		for (k = 0; k < n; k++)
		{
			for (l = 0; l < n; l++)
			{
				if (k == l)
					_putchar('\n');
				else if (l < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
