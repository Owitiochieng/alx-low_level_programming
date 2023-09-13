#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This fumction is designed to print a name
 * @name: string input that is to be added
 * @f: This one points to the function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
