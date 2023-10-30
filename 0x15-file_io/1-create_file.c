#include "main.h"

/**
 * create_file - This is a func that creates a file
 * @filename: This input represents name of the file
 * @text_content: This input represents what is to be written to the file
 * Return: 1 upon success and -1 should it fail
 */
int create_file(const char *filename, char *text_content)
{
	int f_des;
	int content;
	int r_written;

	if (!filename)
		return (-1);

	f_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_des == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (content = 0; text_content[content]; content++)
		;

	r_written = write(f_des, text_content, content);

	if (r_written == -1)
		return (-1);

	close(f_des);

	return (1);
}
