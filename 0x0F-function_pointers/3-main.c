#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - A function meant to print the result of easy operations
 * @argc: The number of arguments input
 * @argv: An array of pointers passed to the arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *w;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	w = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(w) == NULL || w[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*w == '/' && num2 == 0) ||
			(*w == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(w)(num1, num2));
	return (0);
}
