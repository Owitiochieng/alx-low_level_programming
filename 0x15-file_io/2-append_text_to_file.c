#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: This input poins to the name of the file
 * @text_content: The input string for appending
 * Return: 1 should the file exist otherwise return -1 if the file name is
 * NULL or should the permission for write be unavailabe
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, write_res, len_th = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_th = 0; text_content[len_th];)
			len_th++;
	}

	file_des = open(filename, O_WRONLY | O_APPEND);
	write_res = write(file_des, text_content, len_th);

	if (file_des == -1 || write_res == -1)
		return (-1);

	close(file_des);

	return (1);
}
