#include <stdio.h>
#include "main.h"
/**
 * main - This function outpus the number of command-line arguments.
 * @argcount_: The number of command-line arguments.
 * @arg_values: An array containing the command-line arguments.
 * Return: 0 by default
 */
int main(int argcount_, char *arg_values[])
{
	(void) arg_values; /*Ignore arg_values*/
	
	printf("%d\n", argcount_ - 1);
	return (0);
}
