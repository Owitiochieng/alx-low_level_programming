#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- This is a function that read text file print to STDOUT
 * @filename: This is an inut of the text file for reading
 * @letters: This is an input of the number of letters for reading
 * Return: The exact number of bytes read and printed or 0 should the
 * function fail or filename be NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu_ff;
	ssize_t file_des;
	ssize_t read_byt;
	ssize_t written_byt;

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	bu_ff = malloc(sizeof(char) * letters);
	written_byt = read(file_des, bu_ff, letters);
	read_byt = write(STDOUT_FILENO, bu_ff, written_byt);

	free(bu_ff);
	close(file_des);
	return (read_byt);
}
