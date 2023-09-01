#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Point of entry
 * @str: array str
 * Return: 0 by default
 */
int check_num(char *str)
{
	unsigned int namba;

	namba = 0;
	while (namba < strlen(str))
	{
		if (!isdigit(str[namba]))
		{
			return (0);
		}
		namba++;
	}
	return (1);
}

/**
 * main - Prints program name
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0 by default
 */
int main(int argc, char *argv[])
{
	int namba;
	int str_to_int;
	int sum = 0;

	namba = 1;
	while (namba < argc)
	{
		if (check_num(argv[namba]))
		{
			str_to_int = atoi(argv[namba]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		namba++;
	}
	printf("%d\n", sum);
	return (0);
}
