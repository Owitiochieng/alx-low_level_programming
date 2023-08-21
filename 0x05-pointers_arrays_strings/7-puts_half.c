#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: String input
 */

void puts_half(char *str)
{
	int leng_th = 0;
	int ha_lf;
	int l;

	while (str[leng_th] != '\0')
	{
		leng_th++;
	}

	ha_lf = (leng_th - 1) / 2;

	for (l = (ha_lf + 1); l < leng_th; l++)
	{
		_putchar(str[l]);
	}

	putchar('\n');
}
