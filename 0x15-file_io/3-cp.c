#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - This function assigns 1024 bytes to a buffer
 * @file: This input represents the file that needs chars
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *bu_ff;

	bu_ff = malloc(sizeof(char) * 1024);

	if (bu_ff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bu_ff);
}
/**
 * close_file - A function meant to close file descriptors
 * @file_des: This input represents file descriptor for closing
 */
void close_file(int file_des)
{
	int close_res;

	close_res = close(file_des);

	if (close_res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}
/**
 * main - This function is for copying contents of a file to another file
 * @argc: This input represents number of arguments of the program
 * @argv: This input represents argument values of the program
 * Return: 0 on success
 * Description: Should the argument count be incorrect - exit code 97
 * Should the file_from be nonexistant or nonreadable - exit code 98
 * Should the file_to be noncreatable or nonwritable - exit code 99
 * Should the  file_to or file_from be nonclosable - exit code 100
 */
int main(int argc, char *argv[])
{
	int source, des, read_byt, written_byt;
	char *bu_ff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bu_ff = create_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	read_byt = read(source, bu_ff, 1024);
	des = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || read_byt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bu_ff);
			exit(98);
		}

		written_byt = write(des, bu_ff, read_byt);
		if (des == -1 || written_byt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bu_ff);
			exit(99);
		}

		read_byt = read(source, bu_ff, 1024);
		des = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_byt > 0);
	free(bu_ff);
	close_file(source);
	close_file(des);
	return (0);
}

