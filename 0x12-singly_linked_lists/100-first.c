#include <stdio.h>
void fi_rst(void) __attribute__ ((constructor));
/**
 * fi_rst - A function that prints a sentence before the execution
 * of the main function
 * Return: Void
 */
void fi_rst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
