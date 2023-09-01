#include <stdio.h>
#include "main.h"
/**
 * _atoi - Extracts an integer from a string
 * @s: string input
 * Return: the int
 */
int _atoi(char *s)
{
	int g, h, n, len, i, digit;

	g = 0;
	h = 0;
	n = 0;
	len = 0;
	i = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (g < len && i == 0)
	{
		if (s[g] == '-')
			++h;
		if (s[g] >= '0' && s[g] <= '9')
		{
			digit = s[g] - '0';
			if (h % 2)
				digit = -digit;
			n = n * 10 + digit;
			i = 1;
			if (s[g + 1] < '0' || s[g + 1] > '9')
				break;
			i = 0;
		}
		g++;
	}
	if (i == 0)
		return (0);
	return (n);
}

/**
 * main - function for printing the product of two numbers
 * @arg_c: number of arguments
 * @arg_v: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int arg_c, char *arg_v[])
{
	int result, num1, num2;

	if (arg_c < 3 || arg_c > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(arg_v[1]);
	num2 = _atoi(arg_v[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
