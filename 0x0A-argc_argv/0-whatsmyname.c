#include <stdio.h>
#include "main.h"
/**
 * main - This function is for returning name of the program
 * @arg_count: This represents the number of arguments
 * @arg_value: This is an array of arguments
 * Return: 0 by default
 */
int main(int arg_count __attribute__((unused)), char *arg_value[])
{
	printf("%s\n", arg_value[0]);
	return (0);
}
