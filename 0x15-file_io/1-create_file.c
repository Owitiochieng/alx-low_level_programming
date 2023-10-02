#include "main.h"
/**
 * create_file - A function that Creates a file plus contents
 * @filename: This input ponts to the name of the file tobe created
 * @text_content: This input points to a string to be written to the file
 * Return: 1 otherwise -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, wr_ite, len_th = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_th = 0; text_content[len_th];)
			len_th++;
	}

	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr_ite = write(file_des, text_content, len_th);

	if (file_des == -1 || wr_ite == -1)
		return (-1);

	close(file_des);

	return (1);
}
