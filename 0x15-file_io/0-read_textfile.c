#include "main.h"

/**
 * read_textfile - This is a func that reads text file and displays the letters
 * @filename: This input represents the filename
 * @letters: This input represents the num of letters to be printed
 * Return: numbers of letters printed otherwise return 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_des;
	ssize_t read_len, written_len;
	char *strbuf;

	if (!filename)
		return (0);

	f_des = open(filename, O_RDONLY);

	if (f_des == -1)
		return (0);

	strbuf = malloc(sizeof(char) * (letters));
	if (!strbuf)
		return (0);
	read_len = read(f_des, strbuf, letters);
	written_len = write(STDOUT_FILENO, strbuf, read_len);
	close(f_des);
	free(strbuf);
	
	return (written_len);
}
