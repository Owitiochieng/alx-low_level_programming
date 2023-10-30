#include "main.h"
#include <stdio.h>

/**
 * error_file - This function determines whether files can be opened or not
 * @file_from: This is an input showing the source
 * @file_to: This is an input showing the destination
 * @argv: This input represents the arguments vector
 * Return: Void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - This func checks the code for Holberton School students
 * @argc: This input is the num of arguments passed to the func
 * @argv: This input is the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int origin, des, err_close;
	ssize_t character_num, nwr;
	char strbuf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	origin = open(argv[1], O_RDONLY);
	des = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(origin, des, argv);

	character_num = 1024;
	while (character_num == 1024)
	{
		character_num = read(origin, strbuf, 1024);
		if (character_num == -1)
			error_file(-1, 0, argv);
		nwr = write(des, strbuf, character_num);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(origin);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin);
		exit(100);
	}

	err_close = close(des);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin);
		exit(100);
	}
	return (0);
}
