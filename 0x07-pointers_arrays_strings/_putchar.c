#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 * It uses the system call 'write' from <unistd.h>
 * @c: The character to be printed
 * Return: 1 on success else return -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
