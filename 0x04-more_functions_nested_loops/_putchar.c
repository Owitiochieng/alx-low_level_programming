#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @g: The character to be written
 *
 * It writes the specified character @g to the standard output (stdout).
 * It uses the system call `write` from the <unistd.h> header to achieve this.
 *
 * @g: The character to be printed
 *
 * Return: On success, the number of characters written is returned (1).
 *         On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char g)
{
        return (write(1, &g, 1));
}
