#include "main.h"
/**
 * times_table - Prints the ninw times tables
 * main - Starting point
 * Return: 0
 */
void times_table(void)
{
	int u, v, w;

	for (u = 0; u < 10; u++)
	{
		for (v = 0; v < 10; v++)
		{
			w = v * u;
			if (v == 0)
			{
				_putchar(w + '0');
			}
			if (w < 10 && v != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(w + '0');
			} else if (w >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((w / 10) + '0');
				_putchar((w % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
