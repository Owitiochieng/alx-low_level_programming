#include <stdio.h>
#include "main.h"
/**
 * main - This program receives arguments and then prints them
 * @argcount: The number of arguments
 * @argvalues: An input of array of arguments
 * Return: 0 by default
 */
int main(int argcount, char *argvalues[])
{
	int g;

	for (g = 0; g < argcount; g++)
	{
		printf("%s\n", argvalues[g]);
	}
	return (0);
}
