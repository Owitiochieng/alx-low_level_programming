#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - This function reads text file and writes it to POSIX
 * @filename: The file input to be read and printed to POSIX
 * @letters: The value that represents number of letters t be read and printed
 * Return: The number of read and printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int f_des;
	ssize_t read_len, written_len;
	char *strbuff;

	if (filename == NULL)
		return (0);
	f_des = open(filename, O_RDONLY);
	if (f_des == -1)
		return (0);
	strbuff = malloc(sizeof(char) * letters);
	if (strbuff == NULL)
	{
		close(f_des);
		return (0);
	}
	read_len = read(f_des, strbuff, letters);
	close(f_des);
	if (read_len == -1)
	{
		free(strbuff);
		return (0);
	}
	written_len = write(STDOUT_FILENO, strbuff, read_len);
	free(strbuff);
	if (read_len != written_len)
		return (0);
	return (written_len);
}

